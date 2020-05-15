/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:37:52 by bwebb             #+#    #+#             */
/*   Updated: 2020/05/15 09:36:52 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	mknode(int fd, t_fd **nownode)
{
	*nownode = (t_fd *)malloc(sizeof(t_fd));
	(*nownode)->fd = fd;
	(*nownode)->lastb = ft_strnew(0);
	(*nownode)->next = NULL;
}

static int	retln(t_fd **fdnode, char **line)
{
	char	*temp;
	char	*ptr;

	temp = ft_strdup((*fdnode)->lastb);
	ptr = ft_strchr(temp, '\n');
	if (!ptr && ft_strlen(temp) < 1)
	{
		free(temp);
		return (0);
	}
	if (ptr)
		*ptr = '\0';
	*line = ft_strdup(temp);
	free((*fdnode)->lastb);
	(*fdnode)->lastb = (ptr) ? ft_strdup(ptr + 1) : ft_strnew(0);
	free(temp);
	return (1);
}

static int	readln(t_fd **fdnode, char **line)
{
	char	buff[BUFF_SIZE + 1];
	char	*temp;
	int		ret;

	while (!(ft_strchr((*fdnode)->lastb, '\n')))
	{
		ret = read((*fdnode)->fd, buff, BUFF_SIZE);
		if (!ret)
			break ;
		buff[ret] = '\0';
		temp = ft_strdup((*fdnode)->lastb);
		free((*fdnode)->lastb);
		(*fdnode)->lastb = ft_strjoin(temp, buff);
		free(temp);
	}
	return (retln(fdnode, line));
}

static void	fnode(int fd, t_fd **curnode)
{
	t_fd		*prevnode;

	while ((*curnode) && ((*curnode)->fd != fd))
	{
		prevnode = (*curnode);
		(*curnode) = (*curnode)->next;
	}
	if (!(*curnode))
	{
		mknode(fd, curnode);
		prevnode->next = (*curnode);
	}
}

int			get_next_line(const int fd, char **line)
{
	static t_fd	*head;
	t_fd		*curnode;

	if (fd < 0 || !line || (read(fd, 0, 0) < 0))
		return (-1);
	if (!head)
		mknode(fd, &head);
	curnode = head;
	fnode(fd, &curnode);
	return (readln(&curnode, line));
}
