/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:40 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/23 11:39:09 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int			i;
	int			j;
	char		*dst;
	const char	*sorc;

	i = 0;
	dst = dest;
	sorc = src;
	while (dst[i] != '\0')
		i++;
	i--;
	j = -1;
	while (sorc[++j] != '\0')
		dst[++i] = sorc[j];
	return (dest);
}
