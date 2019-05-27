/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:11:18 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/05/22 17:11:19 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		overflowed(int a)
{
	int result;

	result = a * 10;
	if (a != 0 && result / a != 10)
	{
		return (TRUE);
	}
	return (FALSE);
}

int		ft_atoi(const char *str)
{
	int				result;
	int				neg;
	size_t			i;

	result = 0;
	i = 0;
	neg = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (overflowed(result) && neg == 1)
			return (-1);
		else if (overflowed(result) && neg == -1)
			return (0);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * neg);
}
