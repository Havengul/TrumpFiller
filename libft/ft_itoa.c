/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:38:45 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:38:47 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(long n)
{
	size_t i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	i;
	size_t	j;
	char	*str;
	char	neg;

	i = n;
	neg = (i < 0 ? 1 : 0);
	j = ft_count(i);
	str = ft_strnew(j + neg);
	if (str == NULL)
		return (NULL);
	if (neg)
	{
		i = -i;
		str[0] = '-';
	}
	while (j > 0)
	{
		str[j + neg - 1] = (i % 10) + '0';
		j--;
		i = i / 10;
	}
	return (str);
}
