#include "libft.h"

void*	ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	char temp[size];

	if (size == 0)
		return (dest);
	i = 0;
	while (i < size)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}