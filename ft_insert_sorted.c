#include "libft.h"
#include <stdlib.h>

t_list*	ft_insert_sorted(t_list **head, void *content, unsigned int content_size)
{
	t_list	*start;
	t_list	*new_node;
	int	con_size;

	start = *head;
	new_node = (t_list *)malloc(sizeof(t_list));
	new_node -> content = malloc(content_size);
	ft_memcpy((char *)(new_node->content), (char *)content, content_size);
	while ((*head)->next)
	{
		if ((*head)->content_size < content_size)
			con_size = (*head)->content_size;
		else
			con_size = (content_size);
			
		if (ft_memcmp((*head)->content, new_node->content, con_size) <= 0)
		{
			if((*head)->next != NULL)
				new_node->next = (*head)->next;
			else
				new_node->next = NULL;
			
			(*head)->next = new_node;
			return (start);
		}
		else
			*head = (*head)->next;
	}
	if (!((*head)->next))
		(*head)->next = new_node;
	return (start);
}