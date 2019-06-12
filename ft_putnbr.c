/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:49:50 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/12 14:26:19 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ptnr(int n)
{
	(n > 9) ? ft_ptnr(n / 10) : 0;
	ft_putchar((n % 10) + '0');
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	(n < 0) ? ft_putchar('-') : 0;
	ft_ptnr(ft_abs(n));
}
