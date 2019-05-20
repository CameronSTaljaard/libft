#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)dst)[i] == c)
			return (dst);
		i++;
	}
	return (dst);
}