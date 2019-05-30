/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxminrange.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:38:00 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/30 11:58:51 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_maxminrange(int min, int max)
{
	if (min < 0 && max < 0)
		return ((min * -1) + max);
	else if (min < 0 && max >= 0)
		return (max + (min * -1) + 1);
	else
		return (max - min);
}
