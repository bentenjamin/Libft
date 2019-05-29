/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:12:00 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 15:48:43 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	if (min < 0 && max < 0)
		i = abs(min) + max;
	else	if (min < 0 && max >= 0)
		i = max + abs(min) + 1;
	else
		i = max - min;
	str = (int*)malloc(i);
	j = 0;
	while (min != max)
	{
		str[j] = min;
		j++;
		min++;
	}
	return (str);
}
