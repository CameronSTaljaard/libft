#include <time.h>
#include "../libft/libft.h"
#include <strings.h>

int	bzero_test(struct timespec delay, int verbosity)
{
	char str1[] = "ABCDE";
	char str2[] = "ABCDE";
	ft_putendl_col_fd(WHITE, "Testing ft_bzero:", 1);
	nanosleep(&delay, NULL);

	bzero(str1, 5);
	ft_bzero(str2, 5);

	if (verbosity)
	{
		ft_putendl("Passing (\"ABCDE\", 5) to bzero, and ft_bzero");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "bzero result: ", 1);
		ft_putendl_col_fd(CYAN, str1, 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_bzero result: ", 1);
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