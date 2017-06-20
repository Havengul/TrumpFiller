/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:45:57 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:45:59 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_dup(char const *s, char c)
{
	char	*word;
	int		n;
	int		i;

	n = 0;
	while (s[n] && s[n] != c)
		n++;
	word = (char *)malloc(sizeof(char) * n + 1);
	i = 0;
	while (i < n)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int		ft_words(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		n;
	int		i;

	n = ft_words(s, c);
	if (!s || !(str = (char **)malloc(sizeof(char *) * n + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			str[i++] = ft_dup(s, c);
		while (*s && *s != c)
			s++;
	}
	str[i++] = NULL;
	return (str);
}
