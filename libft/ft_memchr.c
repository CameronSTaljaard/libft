#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t	i;
	char	*ptr;

	if (size == 0)
		return (NULL);
	i = 0;
	ptr = (char *)str;
	while (i < size)
	{
		if (((char *)str)[i] == c)
			return ptr + i;
		i++;
	}
	return (NULL);
}