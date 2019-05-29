/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:11:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 17:34:17 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	int		i;

	i = -1;
	s = (char *) str;
	if ((int) n > 0)
		while (++i < (int) n)
			if (s[i] == c)
				return (s + i);
	return (NULL);
}
