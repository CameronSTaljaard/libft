/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:27:45 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/05/22 17:27:46 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_newstr(char *content, size_t size)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		if (content[i])
			temp[i] = content[i];
		else
			temp[i] = '\0';
	}
	temp[size - 1] = '\0';
	return (temp);
}
