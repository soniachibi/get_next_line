/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 00:52:20 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 00:01:27 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*cur;

	i = 0;
	cur = (unsigned char *)b;
	while (i < len)
	{
		cur[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
