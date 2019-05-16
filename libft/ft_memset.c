#include "libft.h"

void*	ft_memset(void *str, int c, size_t size)
{
	size_t i;

	if (size == 0)
		return (str);
	i = 0;
	while (i < size)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}