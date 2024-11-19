#include "libft.h"

int main()
{
	char s[] = "abc";
	char s2[] = "def";
	t_list *head = ft_lstnew(NULL);
	t_list *first = ft_lstnew((char *)s);
	t_list *second = ft_lstnew((char *)s2);
	ft_lstadd_back(&head, first);
	ft_lstadd_back(&head, second);
	t_list *new_list = ft_lstmap(&head, f, )
}