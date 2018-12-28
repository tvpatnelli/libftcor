/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:36:48 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/10 16:07:21 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)s;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}
