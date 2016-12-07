/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 00:52:46 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 10:28:47 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	if (ft_strlen((char *)s1) != ft_strlen((char *)s2))
		return (0);
	else
	{
		i = 0;
		while (i < ft_strlen((char *)s1))
		{
			if (s1[i] != s2[i])
				return (0);
			else
				i++;
		}
		return (1);
	}
}
