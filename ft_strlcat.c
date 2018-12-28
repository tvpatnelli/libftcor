/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 17:21:15 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/21 13:34:15 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(dest);
	lsrc = ft_strlen(src);
	i = 0;
	while (ldst + i + 1 < size && src[i])
	{
		dest[ldst + i] = src[i];
		i++;
	}
	if (ldst < size && size > 0)
	{
		dest[ldst + i] = '\0';
		return (lsrc + ldst);
	}
	return (lsrc + size);
}
