/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 21:18:28 by schibi            #+#    #+#             */
/*   Updated: 2016/10/21 10:04:56 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n < 0)
		write(fd, "-", 1);
	if (n / 10)
		ft_putnbr_fd(ft_abs(n / 10), fd);
	a = '0' + ft_abs(n % 10);
	write(fd, &a, 1);
}
