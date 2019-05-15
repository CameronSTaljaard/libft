#include "libft.h"
#include <stdlib.h>

char*	ft_strnew(size_t size)
{
	char *result;
	size_t i;

	result = (char *)malloc(sizeof(char) * size + 1);
	result[size] = '\0';
	if(result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}