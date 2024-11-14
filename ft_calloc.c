/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:53:39 by molamham          #+#    #+#             */
/*   Updated: 2024/11/14 15:20:39 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*arr;

	if (count == 0 || size == 0)
		return (malloc (0));
	arr = malloc (size * count);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, size * count);
	return (arr);
}
