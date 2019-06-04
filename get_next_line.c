/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:13:10 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/06/04 12:13:11 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>

static t_list			*get_link(t_list **file, int fd)
{
	t_list				*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}

static int				read_file(int fd, t_list *link)
{
	int		ret;
	int		end;
	char	buffer[BUFF_SIZE];

	end = 0;
	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		if (!(link->content = ft_strjoin(link->content, buffer)))
			return (-1);
		if (ft_strchr(buffer, '\n'))
			break ;
		end++;
	}
	return (end);
}

int						get_next_line(const int fd, char **line)
{
	static t_list		*file;
	size_t				i;
	int					ret;
	t_list				*pos;

	if ((fd < 0 || line == NULL || read(fd, NULL, 0) < 0))
		return (-1);
	pos = get_link(&file, fd);
	if (!(*line = ft_strnew(1)))
		return (-1);
	ret = read_file(fd, pos);
	if (ret < BUFF_SIZE && !ft_strlen(pos->content))
		return (0);
	i = ft_copyuntil(line, pos->content, '\n');
	if (i < ft_strlen(pos->content))
		pos->content += i + 1;
	else
		ft_strclr(pos->content);
	return (1);
}
