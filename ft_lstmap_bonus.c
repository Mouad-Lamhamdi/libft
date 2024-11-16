/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:25:08 by molamham          #+#    #+#             */
/*   Updated: 2024/11/15 10:01:44 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
	t_list	*new_list;
	t_list	*clone;

	new_list = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		clone = ft_lstnew(f(lst->content));
		if (!clone)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, clone);
		lst = lst -> next;
	}
	return (new_list);
}
