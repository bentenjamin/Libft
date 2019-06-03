/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:55:02 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/03 16:51:25 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		k;

	if (ft_strncmp(s, "", 1) == 0)
		return (NULL);
	i = 0;
	while ((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' '))
		i++;
	k = ft_strlen(s) - 1;
	while ((s[k] == '\t') || (s[k] == '\n') || (s[k] == ' '))
		k--;
	if (i > k)
		return ("");
	return (ft_strncpy(ft_strnew(k + 1 - i), &s[i], k + 1 - i));
}
