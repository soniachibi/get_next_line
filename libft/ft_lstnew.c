/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 06:00:07 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 10:14:26 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list			*new_link;

	if (!(new_link = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
	}
	else
	{
		new_link->content = ft_memalloc(content_size);
		new_link->content = ft_memcpy(new_link->content, content, content_size);
		new_link->content_size = content_size;
	}
	return (new_link);
}
