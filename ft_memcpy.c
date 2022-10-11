/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:21 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 10:08:34 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    interesting: http://www.danielvik.com/2010/02/fast-memcpy-in-c.html
	void pointers cannot be dereferenced, thus conversion necessary
	smallest unit to be copied is 1 byte -> byte-wise copying
	-> use char datatype (which is 1 byte large)
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_char;
	char	*dest_char;

	src_char = (char *)(src);
	dest_char = (char *)(dest);
	while (n--)
	{
		*dest_char++ = *src_char++;
	}
	return (dest);
}
