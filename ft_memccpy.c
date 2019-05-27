/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:03:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/27 11:55:47 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	size_t		i;
	unsigned char	*dst;
	unsigned const char	*sc;
	unsigned char c1;

	c1 = c;
	i = -1;
	dst = dest;
	sc = source;
	while (++i < n)
	{
		dst[i] = sc[i];
		if (c1 == sc[i])
			return (dst + i + 1);
	}
	return (NULL);
}
