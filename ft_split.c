/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:25:50 by molamham          #+#    #+#             */
/*   Updated: 2024/11/12 14:54:21 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != c)
	{
		words++;
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static void	*ft_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free (arr);
}

static char	**copy_alloc(const char *s, int words, char **arr, char c)
{
	int			i;
	int			len;

	i = 0;
	while (i < words)
	{
		len = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != 0)
		{
			s++;
			len++;
		}
		arr[i] = malloc (sizeof(char) * (len + 1));
		if (!arr)
		{
			ft_free(arr);
			return (NULL);
		}
		ft_strncpy(arr[i++], s - len, len);
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	int			words;

	words = count_words(s, c);
	arr = malloc (sizeof(char *) * (words + 1));
	return (copy_alloc(s, words, arr, c));
}
