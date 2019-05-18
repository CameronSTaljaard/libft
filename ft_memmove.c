#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*u_dst;
	unsigned char	*u_src;

	i = 0;
	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	if (u_src < u_dst)
		while (len-- > 0)
			u_dst[len] = u_src[len];
	else
		while (i < len)
		{
			u_dst[i] = u_src[i];
			i++;
		}
	return (u_dst);
}