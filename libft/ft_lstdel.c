/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 06:09:03 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 06:11:21 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*temp2;

	if (alst && del)
	{
		temp = *alst;
		while (temp != NULL)
		{
			temp2 = temp->next;
			ft_lstdelone(&temp, del);
			temp = temp2;
		}
		*alst = NULL;
	}
}
