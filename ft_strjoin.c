/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:23:12 by molamham          #+#    #+#             */
/*   Updated: 2024/11/01 13:37:58 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	total;

	i = ft_strlen(s1);
	total = i + ft_strlen(s2) + 1;
	str = malloc(total);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, i);
	ft_memcpy(str + i, s2, total);
	return (str);
}
