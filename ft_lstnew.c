/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 22:05:57 by vpatnell          #+#    #+#             */
/*   Updated: 2018/12/29 00:22:01 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nlist;

	if (!(nlist = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		nlist->content = NULL;
		nlist->content_size = 0;
	}
	else if (nlist)
	{
		nlist->content = malloc(content_size);
		if (!nlist->content)
		{
			ft_memdel(nlist->content);
			return (NULL);
		}
		nlist->content_size = content_size;
		ft_memcpy(nlist->content, content, content_size);
	}
	nlist->next = NULL;
	return (nlist);
}
