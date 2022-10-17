/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:37:18 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 19:28:41 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Copies up to dstsize - 1 characters from src string to dst buffer,
	NUL terminating the result if dstsize is not 0.

	dst:		destination buffer
	src:		string to be copied
	dstsize:	number of characters to be copied including the NUL byte
	returns:	the size of the src string
	
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i + 1) = '\0';
	}
	return (strlen(src));
}