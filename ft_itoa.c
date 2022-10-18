/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:05:09 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/18 15:33:53 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	calc_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
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

	len = calc_len(n);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	tmp = n;
	if (n < 0)
		tmp = -1 * n;
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
