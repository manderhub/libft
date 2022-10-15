/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:38 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 13:14:14 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Appends string src to the end of dst. At most dstsize - len -1 
	characters are appended. It will then NUL terminate the dst string,
	unless dstsize is 0 or the original dst string was longer than dstsize.

	dst:		destination string
	src:		source string to be appended to dst
	dstsize:	size of destination buffer
	returns; 	the total length of the string being tried to create 
				(initial length of dst plus length of src)
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = 0;
	while (i < dstsize - len - 1)
	{
		*(dst + len + i) = *(src + i);
		i++;
	}
	*(dst + len + i) = '\0';
	return (len + ft_strlen(src));
}
