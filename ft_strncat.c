/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:40 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 17:34:18 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int			i;
	int			j;
	char		*dst;
	const char	*sorc;

	i = 0;
	dst = dest;
	sorc = src;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while ((sorc[j] != '\0') && (j != (int)n))
	{
		dst[i] = sorc[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dest);
}
