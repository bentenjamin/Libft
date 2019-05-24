/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:03:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/24 15:53:08 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	int		i;
	char	*dst;
	char	*sc;

	i = -1;
	dst = dest;
	sc = (char *) source;
	if ((int) n > 0)
        while ((++i < (int) n) && (sc[i] != '\0'))
		{
			dst[i] = sc[i];
			if ((unsigned char) c == sc[i])
			{
				dst[i+1] = '?';
				return (dst + i + 1);
			}
		}
	return (NULL);
}
