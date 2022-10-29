/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:52:13 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 16:00:25 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Writes len bytes of value 'c' to the buffer 'dest'.
 * 
 * dest:	destination buffer
 * c:		value to be written (converted to unsigned char)
 * len:		number of bytes to be written
 * returns:	destination buffer
*/
void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) dst;
	while (len--)
	{
		*ptr = (unsigned char)(c);
		ptr++;
	}
	return (dst);
}
