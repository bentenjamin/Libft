/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <bwebb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 11:22:30 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/21 11:14:12 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	neg;

	i = 0;
	neg = 1;
	nbr = 0;
	while ((str[i] == '\t') || (str[i] == '\r') || (str[i] == '\f')\
		|| (str[i] == '\v') || (str[i] == ' ') || (str[i] == '\n'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
		if (str[i++] == '-')
			neg = -1;
	while (ft_isdigit(str[i]))
		nbr = (nbr * 10) + str[i++] - 48;
	return (nbr * neg);
}
