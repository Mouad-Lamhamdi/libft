/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:28:27 by molamham          #+#    #+#             */
/*   Updated: 2024/11/13 16:28:29 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	av_space;
	size_t	n;
	size_t	total;

	n = ft_strlen(dest);
	av_space = size - n - 1;
	total = n + ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size <= n)
		return (total);
	if (av_space > 0)
		ft_memcpy(dest + n, src, av_space);
	return (total);
}
