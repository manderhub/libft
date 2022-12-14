/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:32:20 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 18:45:32 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of c (converted to unsigned char) in string s.
 * At most n bytes are checked.
 * 
 * s:		string to be searched
 * c:		character to be looked for
 * n:		max number of bytes to be checked
 * returns:	pointer to the byte located, or NULL if no such byte exists
 * 			within n bytes
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s + i)) == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
