/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:38:28 by molamham          #+#    #+#             */
/*   Updated: 2024/11/02 13:04:03 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_trim(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (to_trim(s2, s1[i]))
		i++;
	while (to_trim(s2, s1[j]))
		j--;
	len = j - (i - 1);
	str = malloc (len + 1);
	return (ft_memcpy(str, s1 + i, len));
}
