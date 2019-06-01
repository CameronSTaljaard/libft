#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	memccpy_test(struct timespec delay, int verbosity)
{
	char str1[] = "ABCDE";
	char str2[] = "ABCDE";

	ft_putendl_col_fd(WHITE, "Testing ft_memccpy:", 1);
	nanosleep(&delay, NULL);

	memccpy(str1, "HELLO", 'E', 5);
	ft_memccpy(str2, "HELLO", 'E', 5);

	if (verbosity)
	{
		ft_putendl("Passing (\"ABCDE\", \"HELLO\", 'E', 5) to memccpy, and ft_memccpy");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "memccpy result: ", 1);
		ft_putendl_col_fd(CYAN, str1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_memccpy result: ", 1);
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