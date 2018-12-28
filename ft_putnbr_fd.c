/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:51:28 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/11 23:03:46 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long	m;

	m = (long)n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m = -m;
	}
	if (m > 9)
	{
		ft_putnbr_fd(m / 10, fd);
		ft_putnbr_fd(m % 10, fd);
	}
	else
		ft_putchar_fd(m + 48, fd);
}
