/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:42:53 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/24 13:41:02 by bwebb            ###   ########.fr       */
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
	while (++i <= k)
		if (hay[i] == ned[0])
		{
			j = 0;
			bf2 = 1;
			while ((++j < ft_strlen(ned)) && (bf2 != 0))
				if (hay[i + j] != ned[j])
					bf2 = 0;
			if (bf2 == 1)
				return ((char *) &hay[i]);
        }
    return (NULL);
}
