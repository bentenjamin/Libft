/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:33:46 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/22 13:08:41 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_params(int argc, char **argv)
{
	int i;

	i = argc;
	while (--i != 0)
	{
		ft_putstr(argv[i]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
}
