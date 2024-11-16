/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:53:39 by molamham          #+#    #+#             */
/*   Updated: 2024/11/16 14:27:41 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (count && size && (count > SIZE_MAX / size))
		return (NULL);
	arr = malloc (size * count);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (count * size));
	return (arr);
}
