#include "libft.h"

void*	ft_memmove(void *dest, const void *src, size_t size)
{
  char  *d;
  const char *s;
  size_t   i;

  i = 0;
  s = (char *)src;
  d = (char *)dest;
  if (d < s)
    while (size--)
      *d++ = *s++;
  else
    {
      while (++i < size)
        *(d + i) = *(s + i);
    }
  return dest;
}