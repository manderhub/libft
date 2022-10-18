/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:05:09 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/18 11:07:30 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_digits(int n)
{
	size_t	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/*
	Allocates and returns a string representing the integer received as
	an argument. Negative numbers are handled.

	n:			integer to be converted to a string
	returns:	string representing the integer; NULL if allocation fails
*/
char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		tmp;

	len = 0;
	tmp = n;
	if (n < 0)
	{
		len++;
		tmp = -1 * n;
	}
	len += num_digits(tmp);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	*(result + len--) = '\0';
	if (tmp == 0)
		*(result) = '0';
	while (tmp > 0)
	{
		*(result + len--) = (tmp % 10) + 48;
		tmp /= 10;
	}
	if (n < 0)
		*(result) = '-';
	return (result);
}
