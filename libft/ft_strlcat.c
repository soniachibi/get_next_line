/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 02:07:11 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 01:30:16 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			dstlength;
	size_t			srclength;

	i = 0;
	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	if (size <= dstlength)
		return (srclength + size);
	while ((dst[i] != '\0') && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dstlength + srclength);
}
