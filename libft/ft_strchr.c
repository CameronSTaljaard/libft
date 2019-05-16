#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return ((char *)&str[i]);
}