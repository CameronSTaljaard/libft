#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (TRUE);
	return (FALSE);
}