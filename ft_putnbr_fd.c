/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:43:10 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 14:00:13 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Prints digits recursively to the given file descriptor.
 * 
 * n:	number to print
 * ft:	file descriptor on which to write
*/
void	print_digits_rec(long n, int fd)
{
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd);
		return ;
	}
	print_digits_rec(n / 10, fd);
	ft_putchar_fd((n % 10) + 48, fd);
	return ;
}

/**
 * Outputs the integer 'n' to the given file descriptor 'fd'.
 * Uses long type internally to avoid int overflow.
 * 
 * n:	integer to output
 * ft:	file descriptor on which to write
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long) n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', fd);
	}
	print_digits_rec(num, fd);
}
