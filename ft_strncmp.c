/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:07:10 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/12 14:03:57 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (((unsigned char)s1[i] < (unsigned char)s2[i]))
			return (-1);
		if (((unsigned char)s1[i] > (unsigned char)s2[i]))
			return (1);
		i++;
	}
	return (0);
}
