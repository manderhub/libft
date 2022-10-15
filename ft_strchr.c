/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:42:48 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 13:22:17 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Locates the first occurrence of c (converted to char) in the string
	pointed to by s.

	s:			string to examine
	c:			character to find in s
	returns:	pointer to located character or NULL if character is not
				found in string	
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (*(s + i) == (char)(c))
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
