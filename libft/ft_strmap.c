#include "libft.h"
#include <string.h>

char*	ft_strmap(char const *s, char (*f)(char))
{
	size_t i;
	char *result;

	i = 0;
	while (s[i])
		i++;
	if (!(result = ft_strnew(i + 1)))
		return (NULL);
	result[i] = '\0';
	i = 0;
	while (s[i])
	{
		result[i] = f(s[i]);
		i++;
	}
	return (result);
}