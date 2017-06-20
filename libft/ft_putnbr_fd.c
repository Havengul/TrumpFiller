/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:41:14 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/09 15:26:33 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(long int n, int fd)
{
	long int		mult;

	mult = 10;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	while (mult <= n)
		mult *= 10;
	while (mult != 1)
	{
		mult /= 10;
		ft_putchar_fd((n / mult) + 48, fd);
		n = n % mult;
	}
}
