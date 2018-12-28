/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:37:35 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 21:25:18 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		negatif;
	int		size;
	int		n2;

	n2 = n;
	size = 0;
	negatif = (n < 0) ? 1 : 0;
	while (n2 /= 10)
		size++;
	size += negatif;
	if (!(str = ft_strnew(size + 1)))
		return (NULL);
	str[size + 1] = '\0';
	while (size >= 0)
	{
		str[size] = (n < 0) ? -(n % 10) + '0' : (n % 10) + '0';
		n /= 10;
		size--;
	}
	if (negatif == 1)
		str[0] = '-';
	return (str);
}
