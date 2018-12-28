/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:54:18 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/10 12:19:02 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	string = (char *)b;
	while (i < len)
	{
		string[i] = c;
		i++;
	}
	return (string);
}
