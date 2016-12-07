/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 00:22:16 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 01:42:01 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t			length;
	char			*ptr;

	ptr = ft_strlen(s1) + s1;
	length = ft_strlen(s2);
	if (length < n)
	{
		*(ptr + length) = 0;
		ft_memcpy(ptr, s2, length);
	}
	else
	{
		*(ptr + n) = 0;
		ft_memcpy(ptr, s2, n);
	}
	return (s1);
}
