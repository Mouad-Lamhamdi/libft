/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:25:08 by molamham          #+#    #+#             */
/*   Updated: 2024/11/18 11:52:26 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *f(void *content)
{
    if (!content)
    {
        printf("Error: NULL content passed to f()\n");
        return NULL;
    }

    char *ptr = (char *)content;
    while (*ptr)
    {
        *ptr -= 32;  // Convert to uppercase
        ptr++;
    }
    return (content);
}

void ft_delet(void *content)
{
	if (content)
		free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			printf("Error: Memory allocation failed for new node\n");
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
int main()
{
	t_list *head = NULL;
	t_list *first = ft_lstnew(ft_strdup("abc"));
	t_list *second = ft_lstnew(ft_strdup("def"));
	
	if (!first || !second)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }
	printf("Adding first node: %s\n", (char *)first->content);
    printf("Adding second node: %s\n", (char *)second->content);
	
	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);
	t_list *new_list = ft_lstmap(head, f, ft_delet);
	t_list *current =  new_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&new_list, ft_delet);
}