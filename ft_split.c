/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:53:08 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/17 18:04:05 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_delimiter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*(s))
	{
		if (*(s) == c)
			count++;
		s++;
	}
	return (count);
}

void	cleanup(char **p, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && *(p + i) != NULL)
	{
		free(*(p + i));
		i++;
	}
	free(p);
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
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	count;
	size_t	size;
	
	size = count_delimiter(s, c) + 2;
	result = malloc(sizeof(char *) * (size));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	count = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (*(s + i) == c || *(s + i) == '\0')
		{
			*(result + j) = ft_substr(s, start, count);
			if (*(result + j) == NULL)
			{
				cleanup(result, size);
				return (NULL);
			}
			start = i + 1;
			count = 0;
			j++;
			i++;
			continue ;
		}
		count++;
		i++;
	}
	*(result + j) = NULL;
	return (result);
}
