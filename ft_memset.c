/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:56:53 by molamham          #+#    #+#             */
/*   Updated: 2024/11/18 10:48:49 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// int main()
// {
// 	int a = 0;
// 	int b = -12345678;
// 	unsigned char *pa = &a;
// 	unsigned char *pb = &b;
// 	int i = 0;
// 	while (i < sizeof(int))
// 	{
// 		ft_memset(pa + i, pb[i], 1);
// 		i++;
// 	}
// 	printf("%d\n", a);
// }