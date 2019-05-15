#include "libft.h"

void	ft_print_list(t_list *head, char type)
{
	if(type == 'd')
	{
		while (head)
		{
			int *temp = head->content;
			int tmp = *temp;
			ft_putnbr(tmp);
			ft_putendl("");
			head = head->next;
		}	
	}
	if(type == 's')
	{
		while (head)
		{
			if(head->content)
			{
				ft_putstr(head->content);
				ft_putendl("");
			}
			head = head->next;
		}	
	}
	if(type == 'c')
	{
		while (head)
		{
			int *temp = head->content;
			int tmp = *temp;
			ft_putchar(tmp);
			ft_putendl("");
			head = head->next;
		}	
	}
}