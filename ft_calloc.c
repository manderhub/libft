/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:43:15 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 12:03:24 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Contiguously allocates enough space for count objects that are size bytes
 * of memory each and fills the allocated memory with bytes of value zero.
 * 
 * count:		number of objects
 * size:		size of each object
 * returns:	pointer to zero-filled allocated memory; on error NULL
 * 			is returned
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	buf = malloc(count * size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, count * size);
	return (buf);
}
