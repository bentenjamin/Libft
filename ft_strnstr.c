/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:42:53 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/28 15:23:23 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t n)
{
	char	bf2;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = n - ft_strlen(ned);
    if (ft_strncmp(ned, "", 1) == 0)
        return ((char *) hay);
    if (ft_strncmp(hay, "", 1) == 0)
        return (NULL);
	while (++i <= k)
		if ((hay[i] == ned[0]) && (i < (int) n))
		{
			j = 0;
			bf2 = 1;
			while ((++j < (int) ft_strlen(ned)) && (bf2 != 0))
				if (hay[i + j] != ned[j])
					bf2 = 0;
			if (bf2 == 1)
				return ((char *) &hay[i]);
        }
    return (NULL);
}
