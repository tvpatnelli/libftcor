/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:35:23 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/26 21:17:12 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
