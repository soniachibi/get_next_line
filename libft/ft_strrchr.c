/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/15 21:37:50 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 01:57:42 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char			tofind;
	char			*ptr;

	tofind = (char)c;
	ptr = NULL;
	while (1)
	{
		if (*src == tofind)
			ptr = (char *)src;
		if (*src++ == '\0')
			return (ptr);
	}
}
