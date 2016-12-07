/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 20:37:02 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 02:11:56 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && little[j] != '\0')
	{
		if (big[i] == little[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		i++;
	}
	if (little[j] == '\0')
		return ((char*)&big[i - j]);
	return (0);
}
