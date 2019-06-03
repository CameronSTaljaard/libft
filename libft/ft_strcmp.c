/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:21:41 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/05/22 17:21:42 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	if (!str1 || !str2)
		return (-1);
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return ((char)str1[i] - (char)str2[i]);
}
