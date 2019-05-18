#include "libft.h"
#include <stdlib.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	size_t	i;

	if (size == 0)
		return ((unsigned char *)dst);
	i = 0;
	while (i++ < size)
	{
		((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char*)dst)[i] == c)
			return ((unsigned char *)dst + i + 1);
	}
	return (dst);
}