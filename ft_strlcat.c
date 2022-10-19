/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:38 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 16:43:04 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Appends string src to the end of dst. At most dstsize - len - 1 
	characters are appended. It will then NUL terminate the dst string,
	unless dstsize is 0 or the original dst string was longer than dstsize.
	More detailed info: https://c-for-dummies.com/blog/?p=3896

	dst:		destination string
	src:		source string to be appended to dst
	dstsize:	size of destination buffer
	returns: 	the total length of the string being tried to create 
				(initial length of dst plus length of src)
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen(dst);
	if (dstsize && dstsize > len_dst)
	{
		i = 0;
		while (i < dstsize - len_dst - 1)
		{
			*(dst + len_dst + i) = *(src + i);
			i++;
		}
		*(dst + len_dst) = '\0';
		return (len_dst + ft_strlen(src));
	}
	else
	{
		return (dstsize + ft_strlen(src));
	}	
}
