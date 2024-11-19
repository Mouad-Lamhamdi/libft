/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:10:52 by molamham          #+#    #+#             */
/*   Updated: 2024/11/18 11:21:36 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
// }
// int main()
// {
// 	int fd = open("File.txt" , O_CREAT | O_RDONLY | O_WRONLY , 0644);
// 	// ft_putendl_fd("Mouad Lamhamdi", fd);
// 	printf("%d\n", fd); 
// }
