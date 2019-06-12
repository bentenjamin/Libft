/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:49:50 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/12 14:27:14 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ptnr_fd(int n, int fd)
{
	(n > 9) ? ft_ptnr_fd((n / 10), fd) : 0;
	ft_putchar_fd((n % 10) + '0', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	(n < 0) ? ft_putchar_fd('-', fd) : 0;
	ft_ptnr_fd(ft_abs(n), fd);
}
