/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:44:44 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:44:46 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = ft_strlen(dst);
	len = ft_strlen(src) + n;
	if (size < n)
		return (ft_strlen(src) + size);
	while (src[i] && (size > n + 1))
		dst[n++] = src[i++];
	dst[n] = '\0';
	return (len);
}
