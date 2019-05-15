#include "libft.h"
#include <stdlib.h>

char*	ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char*	result;

	if(!s)
		return (NULL);

	i = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[i]))
		i--;
	end = i;
	if (!(result = (char *)malloc(sizeof(char) * end - start + 1)))
		return (NULL);
	i = 0;
	while (start <= end)
	{
		result[i++] = s[start];
		start++;
	}
	result[i] = '\0';
	return (result);
}