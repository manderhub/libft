/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:41 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 15:22:16 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Counts the number of characters in the parameterized string, 
 * Not counting the terminating NUL byte.
 * Function is not protected. This is in line with the standard strlen.
 * 
 * s:		the string for which the number of characters is counted
 * returns:	the length of the string, excluding the NUL byte
*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
