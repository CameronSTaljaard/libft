#include "libft.h"
#include <stdlib.h>

char	*ft_newstr(char *content, size_t size)
{
	size_t	i;

	char *temp = (char *)malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		if (content[i])
			temp[i] = content[i];
		else
			temp[i] = '\0';
	}
	temp[size - 1] = '\0';
	return (temp);
}