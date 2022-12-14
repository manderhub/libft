/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:37:18 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 17:28:44 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies up to dstsize - 1 characters from 'src' string to 'dst' buffer,
 * NULL terminating the result if dstsize is not 0.
 * 
 * dst:		destination buffer
 * src:		string to be copied
 * dstsize:	number of characters to be copied including the NUL byte
 * returns:	the size of the src string
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize)
	{
		i = 0;
		while (i < dstsize - 1 && *(src + i))
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}
