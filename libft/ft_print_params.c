/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:12:20 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/20 16:43:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_print_params(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i != argc)
	{
		ft_putstr(argv[i]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
}
