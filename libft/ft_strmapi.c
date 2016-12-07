/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 22:48:11 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 10:22:02 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	i = 0;
	ptr = (char *)malloc((sizeof(char) * ft_strlen((char *)s) + 1));
	if (!ptr)
		return (NULL);
	if (s && f)
		while (i < ft_strlen((char *)s))
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
	ptr[i] = '\0';
	return (ptr);
}
