/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:33:46 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/20 16:41:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_rev_params(int argc, char **argv)
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
