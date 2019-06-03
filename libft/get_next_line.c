#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>
#include "ft_copyuntil.c"
#include "ft_putendl.c"
#include "ft_lstnew.c"
#include "ft_lstadd.c"
#include "ft_strnew.c"
#include "ft_strjoin.c"
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_strclr.c"
#include "ft_memcpy.c"
#include "ft_memset.c"
#include "ft_strcon.c"

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

static int				read_file(int fd, char **buffer, t_list *link)
{
	int		ret;

	ret = 0;
	while (ret = read(fd, *buffer, BUFF_SIZE))
	{
		buffer[ret] = '\0';
		link->content = ft_strjoin(link->content, *buffer);
		if (ft_strcon(*buffer, '\n'))
			return (0);
	}
	return (ret);
}

int						get_next_line(const int fd, char **line)
{
	char				buffer[BUFF_SIZE + 1];
	static t_list		*file;
	size_t				i;
	int					ret;
	t_list				*pos;

	if ((fd < 0 || line == NULL || read(fd, buffer, 0) < 0))
		return (-1);
	pos = get_link(&file, fd);
	if(!(*line = ft_strnew(1)))
		return (-1);
	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		if(!(pos->content = ft_strjoin(pos->content, buffer)))
			return (-1);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(pos->content))
		return (0);
	i = ft_copyuntil(line, pos->content, '\n');
	if (i < ft_strlen(pos->content))
		pos->content += i + 1;
	else
		ft_strclr(pos->content);
	return (1);
}