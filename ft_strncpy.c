/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 08:52:07 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/03 15:26:10 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int	k;

	i = -1;
	k = ft_strlen(src);
	while (++i < (int)n)
		dest[i] = (i < k) ? src[i] : '\0';
	return (dest);
}
