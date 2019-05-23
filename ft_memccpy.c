/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:03:05 by bwebb             #+#    #+#             */
/*   Updated: 2019/05/23 10:39:29 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, void *sc, int c, size_t n)
{
	int		i;
	char	*fuck;
	char	*pointers;

	i = -1;
	fuck = dst;
	pointers = sc;
	if ((int) n > 0)
        while ((++i < (int) n) && (pointers[i] != '\0'))
		{
			if (pointers[(char) c] == pointers[i])
				return(fuck + i + 1);
			else
				fuck[i] = pointers[i];
		}
	return(NULL);
}

int main () {
   char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   printf("%s", ft_memccpy(dest, src, 105, strlen(src)+1));
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
