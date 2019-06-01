#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	memcpy_test(struct timespec delay, int verbosity)
{
	char str1[] = "-----";
	char str2[] = "-----";

	ft_putendl_col_fd(WHITE, "Testing ft_memcpy:", 1);
	nanosleep(&delay, NULL);

	memcpy(str1, "HELLO", 5);
	ft_memcpy(str2, "HELLO", 5);

	if (verbosity)
	{
		ft_putendl("Passing (\"-----\", \"HELLO\", 5) to ft_memcpy and memcpy");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "memcpy result: ", 1);
		ft_putendl_col_fd(CYAN, str1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_memcpy result: ", 1);
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