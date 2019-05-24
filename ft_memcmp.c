/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:07:10 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/24 16:45:04 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	const char	*s1;
	const char	*s2;

	s1 = str1;
	s2 = str2;
	i = -1;
	while (++i < n)
		if ((s1[i] != s2[i]) || ((s1[i] == '\0') && (s2[i] == '\0')))
			return (s1 - s2);
	return (0);
}
