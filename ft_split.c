/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:43:01 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 14:53:42 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of words (substrings between two delimiters c)
 * in string s.
 * 
 * s:		string to be searched
 * c:		delimiter to be counted
 * returns:	number of delimiters encountered
*/
static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (count);
}

/*
 * Frees all allocated memory of p.
 * 
 * p:	memory to be freed
*/
static void	*cleanup(char **p)
{
	size_t	i;

	i = 0;
	while (*(p + i))
	{
		free(*(p + i));
		i++;
	}
	free(p);
	return (NULL);
}

static char	**null_terminate(char **pptr, size_t index)
{
	*(pptr + index) = NULL;
	return (pptr);
}

/*
 * Allocates and returns an array of strings obtained by splitting 's' using
 * the character 'c' as a delimiter. The array must end with a NULL pointer.
 * 
 * s:		string to be split
 * c:		delimiter character
 * returns:	the array of new strings resulting from the split:
 * 			NULL if the allocation fails
*/
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	result = malloc(sizeof(*result) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*(s + len) != c && *(s + len))
				len++;
			*(result + i) = ft_substr(s, 0, len);
			if (!*(result + i++))
				return (cleanup(result));
			s = (s + len - 1);
		}
		s++;
	}
	return (null_terminate(result, i));
}
