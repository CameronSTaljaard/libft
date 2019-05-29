#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{	
	t_list *head = ft_lstnew("ABC", sizeof("ABC"));
	//ft_insert_node(&head, ft_lstnew("XYZ", sizeof("XYZ")));
	ft_insert_sorted(&head, "ZXY", sizeof("ZXY"));
	ft_insert_sorted(&head, "XYZ", sizeof("XYZ"));
	ft_insert_sorted(&head, "BCZ", sizeof("BCZ"));
	ft_insert_sorted(&head, "BCA", sizeof("BCA"));
	ft_insert_sorted(&head, "ABC", sizeof("ABC"));

	ft_print_list(head, 's');
}