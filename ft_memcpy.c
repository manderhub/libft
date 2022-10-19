/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:18:16 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 14:49:52 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Copies n bytes from src buffer to dst buffer.
	If dst and src overlap, behavior is undefined.
    interesting: http://www.danielvik.com/2010/02/fast-memcpy-in-c.html
	void pointers cannot be dereferenced, thus conversion necessary
    smallest unit to be copied is 1 byte -> byte-wise copying
	-> use char datatype (which is 1 byte large)

	dst:	destination buffer
	src:	source buffer
	n:		number of bytes to be copied
	returns destination buffer
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if ((!dst && !src) || ((!dst || !src) && !n))
		return (dst);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
