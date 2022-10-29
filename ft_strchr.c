/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:42:48 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 17:04:13 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the first occurrence of c (converted to char) in the string
 * pointed to by s.
 * The terminating NULL character is considered part of the string.
 * Therefore if c is '\0', the function locates the terminating '\0'.
 * 
 * s:		string to examine
 * c:		character to find in s
 * returns:	pointer to located character or NULL if character is not
 * 			found in string
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	len_byte;

	len_byte = ft_strlen(s) + 1;
	while (len_byte--)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
