/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:42:53 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/30 11:58:52 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *ned)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (ned[0] == '\0')
		return ((char *)hay);
	while (hay[++i] != '\0')
	{
		j = 0;
		while (ned[j] != '\0' && hay[i + j] == ned[j] && \
				hay[i + j] != '\0')
			if (ned[j++ + 1] == '\0')
				return ((char *)&hay[i]);
	}
	return (NULL);
}
