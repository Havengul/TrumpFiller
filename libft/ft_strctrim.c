/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 17:28:36 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 17:28:40 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_increment_big_loop(char c, int i)
{
	if (c == '\0')
		i--;
	i++;
	return (i);
}

static	int		ft_jump_to_start(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

static	char	*ft_modify_words(char *str, char c)
{
	int		i;
	int		j;
	char	*newstr;

	j = 0;
	newstr = (char *)malloc(sizeof(char) * ft_strlen((char *)str));
	i = ft_jump_to_start(str, c);
	while (str[i])
	{
		if (str[i] == c)
		{
			newstr[j] = c;
			j++;
			while (str[i] == c)
				i++;
		}
		if (str[i] && str[i] != c)
		{
			newstr[j] = str[i];
			j++;
		}
		i = ft_increment_big_loop(str[i], i);
	}
	newstr[j] = '\0';
	return (newstr);
}

char			*ft_strctrim(const char *str, char c)
{
	int		j;
	char	*newstr;
	char	*retstr;

	newstr = ft_modify_words(((char *)str), c);
	j = 0;
	retstr = (char *)malloc(sizeof(char) * ft_strlen((char *)newstr));
	while (newstr[j])
	{
		retstr[j] = newstr[j];
		j++;
	}
	free(newstr);
	return (retstr);
}
