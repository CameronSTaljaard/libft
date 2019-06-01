#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	memmove_test(struct timespec delay, int verbosity)
{
	char str1[] = "Overlap Test";
	char str2[] = "Overlap Test";

	ft_putendl_col_fd(WHITE, "Testing ft_memmove:", 1);
	nanosleep(&delay, NULL);

	memmove(str1 + 8, str1, strlen(str1) - 8);
	ft_memmove(str2 + 8, str2, strlen(str2) - 8);

	if (verbosity)
	{
		ft_putendl("Variable str1 = \"Overlap test\"");
		ft_putendl("Passing (str1+8, str1, strlen(str)-8) to memmove, and ft_memmove");
		ft_putendl("");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "memmove result: ", 1);
		ft_putendl_col_fd(CYAN, str1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_memmove result: ", 1);
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