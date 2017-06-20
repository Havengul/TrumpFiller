/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:12:31 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/09 12:47:00 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*new;

	new = (char *)ft_memalloc(sizeof(char) * size);
	ft_memcpy(new, ptr, size);
	ft_memdel(&ptr);
	return (new);
}
