#include "../libft/libft.h"
#include "string.h"
#include <time.h>

int	strlen_test(struct timespec delay, int verbosity)
{
	int result1;
	int result2;

	ft_putendl_col_fd(WHITE, "Testing ft_strlen:", 1);
	nanosleep(&delay, NULL);

	result1 = strlen("HELLO");
	result2 = ft_strlen("HELLO");

	if (verbosity)
	{
		ft_putendl("Passing (\"HELLO\") to strlen, and ft_strlen");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "strlen result: ", 1);
		ft_putnbr_col_fd(CYAN, result1, 1);
		ft_putendl("");
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_strlen result: ", 1);
		ft_putnbr_col_fd(CYAN, result2, 1);
		nanosleep(&delay, NULL);
		ft_putendl("");
	}
	result1 = strlen("");
	result2 = ft_strlen("");
	if (result1 == result2)
	{
		ft_putendl_col_fd(GREEN, "PASSED", 1);
		nanosleep(&delay, NULL);
	}
	else
		ft_putendl_col_fd(RED, "FAILED", 1);
	nanosleep(&delay, NULL);
	
	if (verbosity)
	{
		ft_putendl("Passing (\"\") to strlen, and ft_strlen");
		nanosleep(&delay, NULL);

		ft_putendl_col_fd(WHITE, "Comparing results:", 1);
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "strlen result: ", 1);
		ft_putnbr_col_fd(CYAN, result1, 1);
		ft_putendl("");
		nanosleep(&delay, NULL);
		ft_putstr_col_fd(WHITE, "ft_strlen result: ", 1);
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