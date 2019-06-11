/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:09:42 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/11 19:10:20 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lsnew;

	if (!(lsnew = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	lsnew->content = (content) ? ft_memcpy(ft_memalloc(content_size)\
			, (void *)content, content_size) : NULL;
	lsnew->content_size = (content == NULL) ? 0 : content_size;
	lsnew->next = NULL;
	return (lsnew);
}
