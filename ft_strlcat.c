/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:44 by molamham          #+#    #+#             */
/*   Updated: 2024/11/12 14:25:24 by molamham         ###   ########.fr       */
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
