/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:42:53 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/20 16:43:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	char	bf2;
	int		i;
	int		j;

	i = -1;
	while (++i != (ft_strlen(str) - ft_strlen(to_find)))
		if (str[i] == to_find[0])
		{
			j = -1;
			bf2 = 1;
			while ((++j != ft_strlen(to_find)) && (bf2 != 0))
				if (str[i + j] != to_find[j])
					bf2 = 0;
			if (bf2 == 1)
				return (&str[i]);
        }
    return (NULL);
}
