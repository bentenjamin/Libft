/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:07:10 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/12 13:15:03 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
		return (-1);
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
		return (1);
	return (0);
}
