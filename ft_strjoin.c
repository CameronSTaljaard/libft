#include "libft.h"

char*	ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char*	result;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	result = ft_strnew(i + j + 1);

	if (result == NULL)
		return (NULL);

	result[i + j + 1] = '\0';

	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	return (result);
}