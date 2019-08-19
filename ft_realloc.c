#include <libft.h>

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	unsigned char	*new;
	unsigned char	*tmp_ptr;
	size_t	i;

	if (!new_size)
		return (NULL);
	i = 0;
	tmp_ptr = (unsigned char *)ptr;
	new = (unsigned char *)malloc(new_size);
	ft_bzero(new, new_size);
	i = 0;
	while (tmp_ptr[i] && i < new_size && i < old_size)
	{
		new[i] = tmp_ptr[i];
		i++;
	}
	free(ptr);
	return ((void *)new);
}