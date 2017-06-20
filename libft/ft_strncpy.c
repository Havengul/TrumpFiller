/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 15:28:08 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/09 15:29:29 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	if (len > 0)
	{
		while (len > 0)
		{
			dst[i] = '\0';
			i++;
			len--;
		}
	}
	return (dst);
}
