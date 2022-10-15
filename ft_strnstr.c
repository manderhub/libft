/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:47:53 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 15:11:52 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Locates the first occurrence of string needle in string haystack.
	Not more than len characters are searched and characters after '\0'
	are also not searched.

	haystack:	string to be searched in
	needle:		string to be located
	len:		max number of characters to be searched
	returns:	if needle is found, pointer to fist character of first
				occurrence of needle is returned; if needle is empty
				haystack is returned; else NULL is returned
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	while (i < len)
	{
		if (*(haystack + i) == '\0')
			break ;
		result = (char *)(haystack + i);
		j = 0;
		while (*(needle + j) != '\0')
		{
			if (*(needle + j) != *(haystack + i + j))
				break ;
			if (*(needle + j) == *(haystack + i + j)
				&& ft_strlen(needle) == j + 1)
				return (result);
		}
	}
	return (NULL);
}
