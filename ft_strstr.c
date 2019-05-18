#include "libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[i])
		return (haystack);
	while (haystack[i] && needle[j])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (!needle[j + 1])
				return (haystack + i);
			j++;
		}
		i++;
	} 
	return (NULL);
}
