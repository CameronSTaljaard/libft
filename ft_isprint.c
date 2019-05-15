#include "libft.h"

int	ft_isprint(unsigned char c)
{
	if (c > 30 && c < 127)
	{
		return (TRUE);
	}
	return (FALSE);
}