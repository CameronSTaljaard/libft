#include "../tests.h"
#include "../libft/libft.h"
#include <time.h>

struct timespec delay = {0, 500000000L};

void	local_test()
{
	char	s1[] = "ABCDEFGHIJ";
	char	s2[] = "ABCDEFGHIJ";
	nanosleep(&delay, NULL);
	nanosleep(&delay, NULL);
	ft_putstr_col_fd(WHITE, "Input = \"", 1);
	ft_putstr_col_fd(CYAN, "ABCDEFGHIJ", 1);
	ft_putendl_col_fd(WHITE, "\"", 1);
	nanosleep(&delay, NULL);
	ft_putendl_col_fd(WHITE, "running memset(s1, A, 10)", 1);
	nanosleep(&delay, NULL);
	memset(s1, 'A', 10);
	ft_putendl_col_fd(WHITE, "running ft_memset(s2, A, 10)", 1);
	ft_memset(s2, 'A', 10);
	nanosleep(&delay, NULL);
	ft_putendl_col_fd(WHITE, "Comparing results:", 1);
	nanosleep(&delay, NULL);
	ft_putstr_col_fd(CYAN, s1, 1);
	ft_putstr_col_fd(WHITE, " vs ", 1);
	ft_putendl_col_fd(CYAN, s2, 1);
	nanosleep(&delay, NULL);
	if (strcmp(s1, s2) == 0)
		ft_putendl_col_fd(GREEN, "PASSED\n", 1);
	else
		ft_putendl_col_fd(GREEN, "FAILED\n", 1);
}

void	memset_test()
{
	ft_putstr_col_fd(WHITE, "Testing ft_memset", 1);
	for (int i = 0; i < 3; i++)
	{
		ft_putchar_col_fd(WHITE, '.', 1);
		nanosleep(&delay, NULL);
	}
	ft_putendl("");
	local_test();
}