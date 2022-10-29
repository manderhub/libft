/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:23:30 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 15:16:15 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Tests for the white-space characters.
 * 
 * c:		character to be tested
 * returns:	non-zero value if c is white-space character or else zero
*/
static int	ft_is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

/*
 * Converts the initial portion of the string 'str' to an int representation.
 * Skips all whitespace characters in the beginning.
 * Uses long data type internally, but int overflow occurrs if 'str' is
 * not representable as int.
 * 
 * str:		string to be converted to int
 * returns:	int respresentation of the initial portion of str;
 * 			in case of long overflow, -1 for positive and 0 for 
 * 			negative numbers
*/
int	ft_atoi(const char *str)
{
	long	result;
	long	sign;

	result = 0;
	sign = 1;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (ft_isdigit((int)(*str)))
	{
		result = result * 10 + (long)(*str) - 48;
		if (result < 0)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		str++;
	}
	return ((int)(result * sign));
}
