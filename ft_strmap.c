/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:18:21 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 19:39:53 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fraiche;

	i = 0;
	if (!s)
		return (NULL);
	fraiche = ft_strnew(ft_strlen(s));
	if (f && fraiche)
	{
		while (s[i])
		{
			fraiche[i] = f(((char *)s)[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (NULL);
}
