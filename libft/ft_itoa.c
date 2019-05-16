#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char		*result;
	int		length;

	length = ft_intlen(n);
	if(!(result = (char *)malloc(sizeof(char *) * length + 1)))
		return (NULL);
	result[length] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n)
	{
		result[length - 1] = 48 + (n % 10);
		n = n / 10;
		length--;
	}
	return (result);
}
