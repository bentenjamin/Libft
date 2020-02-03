/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:57:36 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/30 12:15:45 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = str2;
	d = str1;
	i = (d < s) ? (size_t)-1 : n;
	if (((s == NULL) && (d == NULL)) || (str1 == str2))
		return (NULL);
	if (d < s)
		while (++i < n)
			d[i] = s[i];
	else
		while ((int)--i > -1)
			d[i] = s[i];
	return (str1);
}
