/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:12:27 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/20 18:52:17 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int negatif;
	int result;

	i = 0;
	negatif = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		negatif = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	return (result * negatif);
}
