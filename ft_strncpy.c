/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 08:52:07 by bwebb             #+#    #+#             */
/*   Updated: 2020/05/04 13:37:29 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int	k;

	i = -1;
	if (!dest || !src)
		return (NULL);
	k = ft_strlen(src);
	while (++i < (int)n)
		dest[i] = (i < k) ? src[i] : '\0';
	return (dest);
}
