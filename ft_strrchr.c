/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:55:20 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 15:29:01 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the last occurrence of c (converted to char) in the string
 * pointed to by s.
 * The terminating NULL character is considered part of the string.
 * Therefore if c is '\0', the function locates the terminating '\0'.
 * 
 * s:		string to examine
 * c:		character to find in s
 * returns:	pointer to located character or NULL if character is not
 * 			found in string
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (char) c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
