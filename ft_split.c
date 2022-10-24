/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:43:01 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/24 16:53:45 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Counts the number of delimiters c in string s.
	Any number of consecutive delimiters count as 1.
	Delimiters at the beginning and end of string are
	ignored.

	s:			string to be searched
	c:			delimiter to be counted
	returns:	number of delimiters encountered
*/
static size_t	count_delimiter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			if (i != 0 && i != ft_strlen(s) - 1)
				count++;
			while (*(s + i) == c)
				i++;
			continue ;
		}
		i++;
	}
	return (count);
}

/*
	Frees all allocated memory of p.

	p:		memory to be freed
*/
void	*cleanup(char **p)
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

/*
	Allocates and returns an array of strings obtained by splitting ’s’ using
	the character ’c’ as a delimiter. The array must end with a NULL pointer.

	s:			string to be split
	c:			delimiter character
	returns:	the array of new strings resulting from the split:
				NULL if the allocation fails
*/
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	end;
	size_t	i;

	result = malloc(sizeof(*result) * (count_delimiter(s, c) + 1 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*(s))
	{
		if (*(s) != c)
		{
			end = 0;
			while (*(s + end) != c && *(s + end))
				end++;
			*(result + i) = ft_substr(s, 0, end);
			if (!*(result + i))
				return (cleanup(result));
			i++;
			s = (s + (end - 1));
		}
		s++;
	}
	*(result + i) = NULL;
	return (result);
}
