#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	memset_test(struct timespec delay, int verbosity)
{
	char str1[] = "-----";
	char str2[] = "-----";

	ft_putendl_col_fd(WHITE, "Testing ft_memset:", 1);
	nanosleep(&delay, NULL);

	memset(str1, 'A', 3);
	ft_memset(str2, 'A', 3);

	if (verbosity)
	{
		ft_putendl_col_fd(WHITE, "Passing (\"-----\", 'A', 3) to memset, and ft_memset", 1);
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "memset result: ", 1);
		ft_putendl_col_fd(CYAN, str1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_memset result: ", 1);
		ft_putendl_col_fd(CYAN, str2, 1);
		nanosleep(&delay, NULL);
	}

	if (strcmp(str1, str2) == 0)
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