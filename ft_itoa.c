/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:32:57 by molamham          #+#    #+#             */
/*   Updated: 2024/11/14 15:20:42 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*n_positive(int n)
{
	int		len;
	char	*str;

	len = count_len(n);
	str = (char *) malloc (sizeof(char) * (len + 1));
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (str);
}

char	*n_negative(int n)
{
	int		len;
	char	*str;

	n *= -1;
	len = count_len(n);
	str = (char *) malloc (sizeof(char) * (len + 2));
	str[len + 1] = '\0';
	while (len > 0)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	str[len] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return (" -2147483648");
	if (n > 0)
		return (n_positive(n));
	else
		return (n_negative(n));
}
