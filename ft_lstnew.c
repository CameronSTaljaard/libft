/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:11:37 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/05/22 17:11:38 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	if (!(new_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		new_list->content = malloc(content_size);
		if (new_list->content == NULL)
			return (NULL);
		ft_memcpy(new_list->content, content, content_size);
		new_list->next = NULL;
	}
	return (new_list);
}
