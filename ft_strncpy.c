/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 08:52:07 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 17:34:18 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int i;
	int	k;

	i = -1;
	k = ft_strlen(src);
	while (++i < (int) n)
		if  (i < k)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	return (dest);
}
