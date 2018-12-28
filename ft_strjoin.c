/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:02:05 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 21:03:09 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;

	if (!s1 || !s2)
		return (NULL);
	if (!(fraiche = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	fraiche = ft_strcpy(fraiche, (char *)s1);
	fraiche = ft_strcat(fraiche, (char *)s2);
	return (fraiche);
}
