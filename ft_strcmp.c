/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:07:10 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/28 14:51:12 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = -1;
	while (i++ != -2)
		if ((s1[i] != s2[i]) || ((s1[i] == '\0') && (s2[i] == '\0')))
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
