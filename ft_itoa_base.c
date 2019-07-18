/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <bwebb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 11:59:07 by bwebb             #+#    #+#             */
/*   Updated: 2019/07/18 16:57:57 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int in, int b)
{
	char	str[100];
	char	*s;
	int		k;
	int		j;

	k = 0;
	j = in > -1 ? 0 : 1;
	while ((in != 0) || (k == 0))
	{
		str[k++] = BASE_VALS[ft_abs(in % b)];
		in /= b;
	}
	if (!(s = ft_strnew(k + j)))
		return (NULL);
	if (j == 1)
		s[0] = '-';
	while (k > 0)
		s[j++] = str[--k];
	s[j] = '\0';
	return (s);
}
