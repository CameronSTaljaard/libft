#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < size - 1)
		i++;
	return (str1[i] - str2[i]);
}