#include <unistd.h>

void	ft_putchar(int c)
{
    size_t			len;
    unsigned char	buffer[4];

    if (c < 0x80)
	{
        buffer[0] = c;
        len = 1;
    } else if (c < 0x800)
	{
        buffer[0] = 0xc0 | c >>  6;
        buffer[1] = 0x80 | c >>  0 & 0x3f;
        len = 2;
    } else if (c < 0x10000)
	{
        buffer[0] = 0xe0 | c >> 12;
        buffer[1] = 0x80 | c >>  6 & 0x3f;
        buffer[2] = 0x80 | c >>  0 & 0x3f;
        len = 3;
    } else
	{
        buffer[0] = 0xf0 | c >> 18;
        buffer[1] = 0x80 | c >> 12 & 0x3f;
        buffer[2] = 0x80 | c >>  6 & 0x3f;
        buffer[3] = 0x80 | c >>  0 & 0x3f;
        len = 4;
    }
	write(1, buffer, len);
}