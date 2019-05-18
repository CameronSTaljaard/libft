#include "libft.h"

int	overflowed(int a)
{
	int result;
	int b;
	
	b = 10;
	result = a * b;
	if (result / a != b)
	{
		return (TRUE);
	}
	return (FALSE);
}

int ft_atoi(const char *str)
{
	int				result;
	int				neg;
	size_t			i;

	result = 0;
	neg = 1;
	i = 0;

	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	result = 0;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}