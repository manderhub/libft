/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:55:20 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/16 16:32:30 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Copies len bytes from buffer src to buffer dst.
	Copying takes place as if an intermediate buffer were used, allowing the
	destination and source to overlap.
	In case src buffer overlaps into dst buffer, or src == dst,
	backwards copying is used. In all other cases forward copying is used.
	
	dst:		destination buffer
	src:		source buffer
	len:		number of bytes to be copied
	returns:	dst
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_tmp;
	char	*dst_tmp;
	int		i;

	src_tmp = (char *)(src);
	dst_tmp = (char *)(dst);
	if (src <= dst && (src + len) >= dst)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(dst_tmp + i) = *(src_tmp + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(dst_tmp + i) = *(src_tmp + i);
			i++;
		}
	}
	return (dst);
}
