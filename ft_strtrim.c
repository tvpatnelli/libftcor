/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:44:35 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 22:54:00 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*str;
	char		*s1;
	size_t		i;
	size_t		n;

	i = 0;
	str = NULL;
	if (!s)
		return (NULL);
	s1 = (char *)s;
	n = (s1[0] == 0) ? 0 : ft_strlen(s) - 1;
	while (s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t')
		i++;
	if (i < n)
		while (s1[n] == ' ' || s1[n] == '\n' || s1[n] == '\t')
			n--;
	else if (n != 0)
		n--;
	str = ft_strsub(s1, i, n - i + 1);
	return (str);
}
