/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 21:29:52 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 10:20:59 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t			i;
	char			*ptr;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *)malloc((sizeof(char) * ft_strlen((char *)s) + 1));
	if (!ptr)
		return (NULL);
	if (s && f)
		while (i < ft_strlen((char *)s))
		{
			ptr[i] = f(s[i]);
			i++;
		}
	ptr[i] = '\0';
	return (ptr);
}
