/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:16:24 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/30 11:58:52 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = ft_strlen(src);
	str = (char*)malloc(i + 1);
	if (str != NULL)
		return (ft_strcpy(str, src));
	else
		return (str);
}
