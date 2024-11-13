/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:52:06 by molamham          #+#    #+#             */
/*   Updated: 2024/11/13 11:04:27 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;
	t_list	*current;

	size = 0;
	current = lst;
	if (!lst)
		return (NULL);
	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
