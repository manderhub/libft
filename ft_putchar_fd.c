/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:44:34 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 13:57:22 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Outputs the character ’c’ to the given file descriptor.
 * 
 * c:	character to output
 * fd:	file descriptor on which to write
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
