#include "libft.h"

int		ft_strcon(char *str, char c)
{
	size_t	i;

	if (!str || !c)
		return (FALSE);
	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (TRUE);
	return (FALSE);
}