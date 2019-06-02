#include "libft/libft.h"
#include "tests.h"
#include <time.h>

struct	timespec delay = {0, 500000000L};
struct	timespec	convert_delay(int n);
void	run_tests(struct timespec delay, int verbosity);

int		main(int argc, char **argv)
{
	int verbosity;
	int int_delay;

	if (argc != 3)
	{
		ft_putendl_col_fd(RED, "Usage: ./test delay(0-2) verbosity(0-1)", 1);
		return (-1);
	}

	verbosity = ft_atoi(argv[2]);
	int_delay = ft_atoi(argv[1]);

	if (verbosity < 0 || verbosity > 1 || int_delay < 0 || int_delay > 3)
	{
		ft_putendl_col_fd(RED, "Usage: ./test delay(0-2) verbosity(0-1)", 1);
		return (-2);
	}
	if (argc == 3)
	{
		delay = convert_delay(int_delay);
		run_tests(delay, verbosity);
	}
	return (0);
}

struct timespec convert_delay(int n)
{
	if (n == 0)
		delay.tv_nsec = 0;
	if (n == 1)
		delay.tv_nsec = 50000000L;
	if (n == 2)
		delay.tv_nsec = 500000000L;
	if (n == 3)
	{
		delay.tv_nsec = 0;
		delay.tv_sec = 1;
	}
	return (delay);
}


void	run_tests(struct timespec delay, int verbosity)
{
	int result = 0;
	
	result += memset_test(delay, verbosity);
	result += bzero_test(delay, verbosity);
	result += memcpy_test(delay, verbosity);
	result += memccpy_test(delay, verbosity);
	result += memmove_test(delay, verbosity);
	result += memchr_test(delay, verbosity);
	result += memcmp_test(delay, verbosity);
	result += strlen_test(delay, verbosity);
	result += strdup_test(delay, verbosity);

	if (result != 0)
	{
		ft_putendl_col_fd(RED, "FAILED", 1);
	}
	ft_putendl_col_fd(GREEN, "PASSED all tests.", 1);
}