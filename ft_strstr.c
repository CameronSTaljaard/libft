#include "libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	if (needle == '\0')
		return (NULL);
	i = 0;
	j = 0;
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
