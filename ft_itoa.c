#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*result;
	int		length;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));

	if(!(result = ft_strnew(ft_intlen(n))))
		return (NULL);
	length = ft_intlen(n);
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
