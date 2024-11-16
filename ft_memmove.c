/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:46:25 by molamham          #+#    #+#             */
/*   Updated: 2024/11/16 21:36:23 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (dest <= src)
	{
		while (len--)
			*dest1++ = *src1++;
	}
	else if (dest > src)
	{
		i = len;
		while (i--)
		{
			dest1[i] = src1[i];
		}
	}
	return (dest);
}
