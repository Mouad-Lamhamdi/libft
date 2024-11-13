/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:13:55 by molamham          #+#    #+#             */
/*   Updated: 2024/11/01 13:22:42 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s || !start || !len)
		return (NULL);
	if (start + len > ft_strlen(s))
		return (NULL);
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	return (str);
}
