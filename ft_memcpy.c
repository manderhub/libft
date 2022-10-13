/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:18:16 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/13 15:59:46 by manderhu         ###   ########.fr       */
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
	char	*src_char;
	char	*dst_char;

	src_char = (char *)(src);
	dst_char = (char *)(dst);
	while (n--)
	{
		*dst_char++ = *src_char++;
	}
	return (dst);
}
