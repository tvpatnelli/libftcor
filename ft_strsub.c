/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:51:41 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 19:54:57 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fraiche;
	unsigned int	i;

	i = 0;
	if (!(fraiche = ft_strnew(len)) || !s)
		return (NULL);
	while (s[start] && len--)
	{
		fraiche[i] = s[start + i];
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
