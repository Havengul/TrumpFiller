/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:39:21 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:39:22 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	char	tmp;

	s1 = (char *)s;
	tmp = (unsigned char)c;
	while (n--)
	{
		if (*s1 == tmp)
			return (s1);
		s1++;
	}
	return (0);
}
