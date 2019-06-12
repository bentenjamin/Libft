/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:11:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/12 14:52:03 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = -1;
	s = (unsigned char *)str;
	if (n > 0)
		while (++i < n)
			if (s[i] == (unsigned char)c)
				return ((void *)str + i);
	return (NULL);
}
