/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:46:08 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/21 14:02:41 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (&dst[i + 1]);
		}
		i++;
	}
	return (0);
}
