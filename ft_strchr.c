#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str[i] == '\0')
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] != c)
		return (NULL);
	return ((char *)&str[i]);
}