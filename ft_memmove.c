/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:57:36 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/24 16:09:24 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	int	i;
	char	*s1;
	char	*s2;

	i = -1;
	s1 = str1;
	s2 = (char *) str2;
	while (++i < (int) n)
		s1[i] = s2[i];
	return (str1);
}
