/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:34:57 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/29 15:48:42 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t iin)
{
	char	*ptr;
	int	i;

	i = -1;
	ptr = str;
	if ((int) iin > 0)
		while ((++i < (int) iin) && (ptr[i] != '\0'))
			ptr[i] = '\0';
	return (str);
}
