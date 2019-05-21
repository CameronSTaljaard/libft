#include <stdlib.h>

char    *ft_realloc_str(char *str, int n)
{
    char *temp;

    temp = realloc(str, n);
    if (!temp)
        return (NULL);
    str = temp;
    return (str);
}