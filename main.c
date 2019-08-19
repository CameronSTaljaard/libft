#include "./includes/libft.h"
#include <stdlib.h>

int		main(int ac, char **av)
{
	int	*int_arr;
	int	size = 5;

	int_arr = (int *)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
		int_arr[i] = i;
	for (int i = 0; i < size; i++)
		ft_putnbrl(int_arr[i]);
	ft_realloc(int_arr, size, size + 5);
	for (int i = 0; i < size + 5; i++)
		int_arr[i] = i;
	for (int i = 0; i < size + 5; i++)
		ft_putnbrl(int_arr[i]);
}