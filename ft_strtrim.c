#include "libft.h"
#include <stdlib.h>

char*	ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*result;
	int		i;

	if (s == NULL)
		return (NULL);
	start = 0;

	while (ft_iswhitespace(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[end]))
		end--;
	result = ft_strnew(end - start + 1);
	if (!(result))
			return (NULL);
	result[end - start + 1] = '\0';
	i = 0;
	while (i < (end - start + 1))
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}
