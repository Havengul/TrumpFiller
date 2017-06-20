/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:31:24 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/09 15:25:57 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checklen(const char *str)
{
	int		i;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (i > 10)
		if (*(str - 1) == '-')
			return (0);
		else
			return (-1);
	else
		return (1);
}

int			ft_atoi(const char *str)
{
	int		ans;
	int		n;

	ans = 0;
	if (ft_checklen(str) != 1)
		return (ft_checklen(str));
	n = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		ans = (ans * 10) + (*str - '0');
		str++;
	}
	return (ans * n);
}
