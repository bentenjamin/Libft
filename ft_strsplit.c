/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:33:37 by bwebb             #+#    #+#             */
/*   Updated: 2020/05/04 13:38:38 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcnt(const char *s, char c)
{
	int		i;
	int		k;

	i = -1;
	k = 1;
	while (s[++i])
		if ((s[i] != c) && (s[i] != '\0'))
		{
			k++;
			while ((s[i] != c) && (s[i + 1] != '\0'))
				i++;
		}
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**strs;

	if (!s || !c)
		return (NULL);
	if (!(strs = (char **)malloc(ft_wcnt(s, c) * sizeof(char *))))
		return (NULL);
	i = -1;
	k = 0;
	while (s[++i])
		if ((s[i] != c) && (s[i] != '\0'))
		{
			j = 1;
			while ((s[++i] != c) && (s[i] != '\0'))
				j++;
			if (!(strs[k] = ft_strncpy(ft_strnew(j), &s[i - j], j)))
				return (NULL);
			k++;
			if (s[i] == '\0')
				i--;
		}
	strs[k] = NULL;
	return (strs);
}
