#include "libft.h"

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
	t_list *lst;
	t_list *first;
	t_list *second;
	t_list *third;
	t_list *new;
	t_list *last;


	first = malloc (sizeof(t_list));
	second = malloc (sizeof(t_list));
	third = malloc (sizeof(t_list));
	new = malloc (sizeof(t_list));
	last = malloc (sizeof(t_list));

	first->content = (char *)"mouad";
	first->next = second;
	second->content = (char *)"lamhamdi";
	second->next = third;
	third->content = "Mouad Lamhamdi";
	new->content = "newwwww";
	last->content = "laaaaaaast";
	third->next = NULL;

	lst = first;
	ft_lstadd_front(&lst, new);
	ft_lstadd_back(&lst, last);
	print_list(lst);
	return 0;
}
