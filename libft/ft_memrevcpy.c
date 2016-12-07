/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrevcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 23:35:13 by schibi            #+#    #+#             */
/*   Updated: 2016/10/20 23:59:48 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memrevcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char *)dst + (n - 1);
	ptr2 = (unsigned char *)src + (n - 1);
	while (n)
	{
		*ptr1 = *ptr2;
		--ptr1;
		--ptr2;
		--n;
	}
	return (dst);
}
