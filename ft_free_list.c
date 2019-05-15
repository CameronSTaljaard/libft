#include "libft.h"
#include "stdlib.h"

void	ft_free_list(t_list **node)
{
	if ((*node)->next)
		ft_free_list(&(*node)->next);
	free (*node);
}