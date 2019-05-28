/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:42:53 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/28 14:54:44 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *ned)
{
	char	bf2;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = ft_strlen(hay) - ft_strlen(ned);
	if (ft_strncmp(ned, "", 1) == 0)
		return ((char *) hay);
	if (ft_strncmp(hay, "", 1) == 0)
		return (NULL);
	while (++i <= k)
		if (hay[i] == ned[0])
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
