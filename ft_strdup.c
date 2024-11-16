/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:48:32 by molamham          #+#    #+#             */
/*   Updated: 2024/11/01 11:11:02 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	size_t	i;

	i = ft_strlen(s) + 1;
	arr = malloc(i);
	if (!arr)
		return (NULL);
	ft_memcpy(arr, s, i);
	return (arr);
}
