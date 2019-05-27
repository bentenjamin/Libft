/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:02:38 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/27 17:43:25 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char cin)
{
	int i;

	i = ft_strlen((char *) str);
	if ((cin == '\0') && (str[i] == '\0'))
		return ((char *) &str[i]);
	else
	while (--i != -1)
		if (str[i] == cin)
			return ((char *) &str[i]);
	return (0);
}
