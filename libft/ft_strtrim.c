/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:46:13 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/09 12:54:17 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkwhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r');
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	n;
	char	*str;

	i = 0;
	n = ft_strlen(s);
	while (ft_checkwhitespace(s[i]))
		i++;
	while (ft_checkwhitespace(s[n - 1]))
		n--;
	if (n < i)
		n = i;
	str = ft_strnew(n - i);
	if (str == NULL)
		return (NULL);
	return (ft_strncpy(str, s + i, n - i));
}
