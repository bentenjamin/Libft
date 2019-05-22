/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:03:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/22 15:29:11 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dst, void *src, size_t n)
{
	int	i;
	char	*fuck;
	char	*pointers;

	i = -1;
	fuck = dst;
	pointers = src;
	if ((int) n > 0)
        while ((++i < (int) n) && (pointers[i] != '\0'))
		fuck[i] = pointers[i];
}
