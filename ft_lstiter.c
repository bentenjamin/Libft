/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:24:25 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/13 16:47:04 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	iter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst->next != NULL)
		ft_lstiter(lst->next, f);
	f(lst);
}

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	iter(lst, f);
}
