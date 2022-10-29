/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:47:19 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 17:41:53 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum length 'len'.
 * For non-negative 'len', the resulting string will be NULL-terminated.
 * 
 * s:		string from which to create the substring
 * start:	start index of the substring in the string 's'
 * len:		max length of the substring (excluding NULL byte)
 * returns:	the created substring; NULL if allocation fails
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (start + len > s_len)
		len = s_len - start;
	substring = ft_calloc(len + 1, sizeof(*substring));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(substring + i) = *(s + start + i);
		i++;
	}
	return (substring);
}
