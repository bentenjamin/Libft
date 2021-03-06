/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:42:53 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/13 15:09:42 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (ned[0] == '\0')
		return ((char *)hay);
	while (hay[++i] != '\0' && i < n)
	{
		j = 0;
		while (ned[j] != '\0' && hay[i + j] == ned[j] && \
				hay[i + j] != '\0' && i + j < n)
			if (ned[j++ + 1] == '\0')
				return ((char *)&hay[i]);
	}
	return (NULL);
}
