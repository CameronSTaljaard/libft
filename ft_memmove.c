#include "libft.h"

void*	ft_memmove(void *dest, const void *src, size_t size)
{
  char *d = dest;
  const char *s = src;
  if (d < s)
    while (size--)
      *d++ = *s++;
  else
    {
      char *lasts = s + (size-1);
      char *lastd = d + (size-1);
      while (size--)
        *lastd-- = *lasts--;
    }
  return dest;
}