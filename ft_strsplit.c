/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:55:33 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/27 21:17:09 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cout_words(char *str, char c)
{
	int			i;
	int			cmpt;

	i = 0;
	cmpt = 0;
	while (str[i])
	{
		if (str[i] != c && str[i] != '\0')
			cmpt++;
		while (str[i] != c && str[i] != '\0')
			i++;
		if (str[i] == c)
			while (str[i] == c)
				i++;
	}
	return (cmpt);
}

static int		wlen(char *str, char c, int i)
{
	int			j;

	j = 0;
	while (str[i + j] != c && str[i + j] != '\0')
		j++;
	return (j);
}

static char		**print_words(char **stg, char *s, char c)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			if (!(stg[j] = (char *)malloc(sizeof(**stg) * wlen(s, c, i) + 1)))
				return (NULL);
			k = 0;
			while (k < wlen(s, c, i))
			{
				stg[j][k] = s[i + k];
				k++;
			}
			stg[j][k] = '\0';
			j++;
			i = k + i - 1;
		}
		i++;
	}
	return (stg);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**string;
	int			nbr_word;
	char		*s1;

	if (!s)
		return (NULL);
	s1 = (char *)s;
	nbr_word = cout_words(s1, c);
	if (!(string = (char **)malloc(sizeof(*string) * (nbr_word + 1))))
		return (NULL);
	string[nbr_word] = 0;
	string = print_words(string, s1, c);
	return (string);
}
