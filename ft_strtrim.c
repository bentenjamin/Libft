/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:55:02 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/06 17:58:31 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strncmp(s, "", 1) == 1)
		return (NULL);
	i = 0;
	while ((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' '))
		i++;
	k = ft_strlen(s) - 1;
	while ((s[k] == '\t') || (s[k] == '\n') || (s[k] == ' '))
		k--;
	if (i > k)
		return ("");
	if (!(ptr = ft_strnew(k + 1 - i)))
		return (NULL);
	return (ft_strncpy(ptr, &s[i], k + 1 - i));
}
