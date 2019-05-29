/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:57:36 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 15:48:43 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*d;
	const char	*s;
	size_t 		i;

	i = -1;
	s = str2;
	d = str1;
	if (((s == NULL) && (d == NULL)) || (str1 == str2))
		return (NULL);
	if (d < s)
		while (++i <  n)
			d[i] = s[i];
	else
	{
		i = n;
		while ((int)--i > -1)
			d[i] = s[i];
	}
	return (str1);
}
