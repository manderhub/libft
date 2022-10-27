/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:55:20 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 13:46:20 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies 'len' bytes from buffer 'src' to buffer 'dst'.
 * Copying takes place as if an intermediate buffer were used, allowing the
 * destination and source to overlap.
 * In case 'src' address is smaller equal 'dst' address, backwards copying
 * is used, which manages overlap. In all other cases forward copying is used.
 * 
 * dst:		destination buffer
 * src:		source buffer
 * len:		number of bytes to be copied
 * returns:	dst
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	if ((!src && !dst))
		return (dst);
	if (src <= dst)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
