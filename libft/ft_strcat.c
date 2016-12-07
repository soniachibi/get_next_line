/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 11:26:02 by schibi            #+#    #+#             */
/*   Updated: 2016/12/03 17:05:10 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		length;
	char		*ptr;

	ptr = ft_strlen(s1) + s1;
	length = ft_strlen(s2) + 1;
	ft_memcpy(ptr, s2, length);
	ptr += length - 1;
	*ptr = 0;
	return (s1);
}
