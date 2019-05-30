/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:12:42 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/30 13:59:34 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	i = -1;
	while (s[++i])
		str[i] = f(s[i]);
	return (str);
}
