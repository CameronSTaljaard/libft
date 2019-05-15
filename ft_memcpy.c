#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t i;

	if (size == 0)
		return (dst);
	i = 0;
	while (i < size)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}