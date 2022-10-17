/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:47:19 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/17 13:00:31 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates and returns a substring from the string s.
	The substring begins at index start and is of maximum lenght len.
	For non-negative len, the resulting string will be NUL-terminated.

	s:			string from which to create the substring
	start:		start index of the substring in the string s
	len:		max lenght of the substring (excluding NUL byte)
	returns:	the created substring; NULL if allocation fails
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	int		actual_len;

	actual_len = len;
	if (ft_strlen(s) - start < len)
		actual_len = ft_strlen(s) - start;
	substring = malloc((actual_len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(substring + i) = *(s + start + i);
		i++;
	}
	*(substring + i) = '\0';
	return (substring);
}
