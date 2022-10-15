/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:41 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 12:51:32 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Counts the number of characters in the parameterized string, 
	not counting the terminating NUL byte.
    NULL check NOT included. This is in line wit the standard strlen.
    (https://stackoverflow.com/questions/5796103/strlen-not-checking-for-null).

	s:	the string for which the number of characters is counted
    returns the length of the string, excluding the NUL byte
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
