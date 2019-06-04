/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:09:45 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/05/22 17:09:46 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] && str2[i] && i < size - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
