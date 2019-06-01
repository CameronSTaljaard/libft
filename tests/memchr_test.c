#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	memchr_test(struct timespec delay, int verbosity)
{
	char str1[] = "The quick brown fox jumps over the lazy dog";
	char str2[] = "The quick brown fox jumps over the lazy dog";
	char *result1;
	char *result2;

	ft_putendl_col_fd(WHITE, "Testing ft_memchr:", 1);
	nanosleep(&delay, NULL);

	result1 = memchr(str1, 'l', 44);
	result2 = ft_memchr(str2, 'l', 44);

	if (verbosity)
	{
		ft_putendl("Passing (\"The quick brown fox jumps over the lazy dog\", 'l', 44) to memchr, and ft_memchr");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "memchr result: ", 1);
		ft_putendl_col_fd(CYAN, result1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_memchr result: ", 1);
		ft_putendl_col_fd(CYAN, result2, 1);
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