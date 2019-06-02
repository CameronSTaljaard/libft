#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	strdup_test(struct timespec delay, int verbosity)
{
	char str1[] = "Duplicate me";
	char *result1;
	char *result2;

	ft_putendl_col_fd(WHITE, "Testing ft_strdup:", 1);
	nanosleep(&delay, NULL);

	result1 = strdup(str1);
	result2 = ft_strdup(str1);
	if (verbosity)
	{
		ft_putendl("Passing (\"Duplicate me\") to strdup, and ft_strdup");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "strdup result: ", 1);
		ft_putendl_col_fd(CYAN, result1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_strdup result: ", 1);
		ft_putendl_col_fd(CYAN, result2, 1);
		nanosleep(&delay, NULL);
	}

	if ((strcmp(result1, result2) == 0))
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