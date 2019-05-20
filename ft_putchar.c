#include <unistd.h>

void	ft_putchar(int c)
{
	int test;

	test = ((unsigned char *)(&c))[0];
	if (0xC2 <= test && test <= 0xDF)
            write(1, &c, 2);
		else if (0xE0 <= test && test <= 0xEF)
            write(1, &c, 3);
        else if (0xF0 <= test && test <= 0xF4)
            write(1, &c, 4);
        else
    		write(1, &c, 1);
}