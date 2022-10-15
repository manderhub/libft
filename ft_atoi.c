/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:23:30 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 18:23:58 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Tests for the white-space characters.
	
	c:			character to be tested
	returns:	non-zero value if c is white-space character or else zero
*/
static int	ft_isspace(int c)
{
	unsigned int	c_ui;

	c_ui = (unsigned int)(c);
	return (c_ui == '\t' || c_ui == '\n' || c_ui == '\v' || c_ui == '\f' || c_ui == '\r' || c_ui == ' ');
}

/*
	Converts the initial portion of the string str to an int representation.
	Skips all whitespace characters in the beginning.

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
	while (ft_isspace((int)*(str + i)))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit((int)(*(str + i))))
	{
		result = result * 10 + (int)(*(str + i)) - 48;
		i++;
	}
	return (result * sign);
}
