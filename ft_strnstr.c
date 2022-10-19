/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:47:53 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 21:50:45 by manderhu         ###   ########.fr       */
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
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (!len_needle)
		return ((char *)(haystack));
	if (len_needle <= len)
	{
		i = 0;
		while (i <= len - len_needle && *(haystack))
		{
			result = (char *)(haystack + i);
			j = 0;
			while (*(haystack + i + j) == *(needle + j) && *(needle + j))
				j++;
			if (!*(needle + j))
				return (result);
			i++;
		}
	}
	return (NULL);
}
