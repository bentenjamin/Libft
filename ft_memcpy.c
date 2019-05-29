/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:03:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 17:34:17 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*fuck;
	char	*pointers;

	i = -1;
	fuck = dst;
	pointers = src;
	if (!((fuck == NULL) && (pointers == NULL)))
    while (++i < n)
		fuck[i] = pointers[i];
	return (dst);
}
