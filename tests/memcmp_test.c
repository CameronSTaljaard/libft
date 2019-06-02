#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	memcmp_test(struct timespec delay, int verbosity)
{
	int result1;
	int result2;

	ft_putendl_col_fd(WHITE, "Testing ft_memcmp:", 1);
	nanosleep(&delay, NULL);

	result1 = memcmp("HELLO", "HELLO", 5);
	result2 = ft_memcmp("HELLO", "HELLO", 5);

	if (verbosity)
	{
		ft_putendl("Passing (\"HELLO\", \"HELLO\", 'E', 5) to memcmp, and ft_memcmp");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "memcmp result: ", 1);
		ft_putnbr_col_fd(CYAN, result1, 1);
		ft_putendl("");
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_memcmp result: ", 1);
		ft_putnbr_col_fd(CYAN, result2, 1);
		ft_putendl("");
		nanosleep(&delay, NULL);
	}

	if (result1 == result2)
	{
		ft_putendl_col_fd(GREEN, "PASSED", 1);
		nanosleep(&delay, NULL);
		ft_putendl("");
		return (0);
	}
	else
		ft_putendl_col_fd(RED, "FAILED", 1);
	nanosleep(&delay, NULL);
	ft_putendl("");
	return (1);
}