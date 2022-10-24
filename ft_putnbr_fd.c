/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:44:52 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/25 00:13:51 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_digits(long n)
{
	size_t	result;

	result = 1;
	while (n > 10)
	{
		n /= 10;
		result++;
	}
	return (result);
}

static long	pow_10(size_t e)
{
	long	result;

	result = 1;
	while (e > 1)
	{
		result *= 10;
		e--;
	}
	return (result);
}

/*
	Outputs the integer ’n’ to the given file descriptor.
	
	n:	integer to output
	fd:	file descriptor on which to write	
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	divisor;
	long	tmp;
	char	c;
	size_t	digits;

	tmp = (long)(n);
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		tmp = -1 * (long)(n);
	}
	digits = num_digits(tmp);
	divisor = pow_10(digits);
	while (digits--)
	{
		if (tmp < 10)
			c = (char)(tmp + 48);
		else
			c = (char)((tmp / divisor) + 48);
		ft_putchar_fd(c, fd);
		tmp = tmp % divisor;
		divisor /= 10;
	}
}
