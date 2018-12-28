/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:47:05 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 19:42:35 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fraiche;

	i = 0;
	if (!s)
		return (NULL);
	fraiche = ft_strnew(ft_strlen(s));
	if (f && fraiche)
	{
		while (s[i])
		{
			fraiche[i] = f(i, ((char *)s)[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (NULL);
}
