/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:23:30 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 15:38:30 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Converts the initial portion of the string str to an int representation.

	str:		string to be converted to int
	returns:	int respresentation of the initial portion of str
*/
int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	size_t	i;

	result = 0;
	i = 0;
	sign = 1;
	if (*(str) == '-')
		sign = -1;
		i++;
	while (ft_isdigit((int)(*(str + i))))
	{
		result = result * 10 + (int)(*(str + i)) - 48;
		i++;
	}
	return (result * sign);
}
