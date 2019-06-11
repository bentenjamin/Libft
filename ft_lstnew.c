/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:09:42 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/11 15:28:02 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	struct s_list	*lsnew;

	if (!(lsnew = (struct s_list*)malloc(sizeof(struct s_list))))
		return (NULL);
	lsnew->content = (void *)content;
	lsnew->content_size = (content == NULL) ? 0 : content_size;
	lsnew->next = NULL;
	return (lsnew);
}
