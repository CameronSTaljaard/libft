#include "libft.h"

int ft_atoi(const char *str)
{
	long long int	result;
	int				neg;
	size_t			i;

	result = 0;
	neg = 1;
	i = 0;

	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	result = 0;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	return (result * neg);
}