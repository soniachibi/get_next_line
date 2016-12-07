/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 19:24:02 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 01:47:31 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t			i;
	char			*str;

	i = 0;
	str = dst;
	while (i < len)
	{
		if (src[i] != '\0')
			str[i] = src[i];
		else
		{
			while (i < len)
			{
				str[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dst);
}
