/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:45:45 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:45:46 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		l;
	int		b;

	if (*little == '\0')
		return ((char *)(big));
	i = 0;
	while (big[i] && len > 0)
	{
		if (len < ft_strlen(little))
			return (NULL);
		l = 0;
		b = i;
		while (big[b] == little[l] && little[l] && big[b])
		{
			l++;
			b++;
		}
		if (little[l] == '\0')
			return ((char *)big + i);
		len--;
		i++;
	}
	return (NULL);
}
