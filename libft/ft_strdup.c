/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 18:04:47 by schibi            #+#    #+#             */
/*   Updated: 2016/11/22 21:39:59 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		counter;
	char		*str;

	counter = ft_strlen(s1);
	str = (char *)malloc((counter + 1) * sizeof(char));
	if (str != NULL)
		return (ft_memmove(str, s1, (counter + 1) * sizeof(char)));
	return (NULL);
}
