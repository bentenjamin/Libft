/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:40 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/24 11:57:12 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t n)
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
	while ((sorc[j] != '\0') && (i < (int) n))
	{
		dst[i] = sorc[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}
