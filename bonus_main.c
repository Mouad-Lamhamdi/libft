#include "libft.h"

void del_content(void *content)
{
	free(content);
}

static void	print_list(t_list *lst)
{
	t_list *current;

	current = lst;
	while (current)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
}

int main()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Last");
	head = ft_lstnew("-Head-");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_front(&head, ft_lstnew("Front"));
	print_list(head);
	ft_lstdelone(head, del_content);
	print_list(head);
}
