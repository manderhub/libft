/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:43:15 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 19:09:40 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Contiguously allocates enough space for count objects that are size bytes
	of memory each and filles the allocated memory with bytes of value zero.
	
	count:		number of objects
	size:		size of each object
	returns:	pointer to zero-filled allocated memory; on error NULL
				is returned
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	buf = malloc(count * size);
	if (buf == NULL)
		return (NULL);
	ft_bzero(buf, count);
	return (buf);
}
