/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:52:50 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/17 12:09:03 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Determines whether character c is an elment of the set.

	c:			character to be looked for
	set:		set of trimmable characters
	set_len:	number of elements in set
	returns:	1 if c is in set; 0 if c is not in set
*/
static int	ft_inset(char c, char const *set, size_t set_len)
{
	while (set_len--)
	{
		if (c == *(set))
			return (1);
		set++;
	}
	return (0);
}

/*
	Calculates the number of trimmable characters at the beginning or 
	the end of string s1.
	
	s1:			string
	set:		set of trimmable characters
	left:		search direction;
				from left if non-zero; from right if zero
	returns:	the number of trimmable characters at the beginning or
				end of string s1
	
*/
static size_t	ft_num_trimmable(char const *s1, char const *set, int left)
{
	int		i;
	size_t	len_s1;
	size_t	len_set;
	size_t	num_trimmable;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(s1);
	num_trimmable = 0;
	if (left)
	{
		i = 0;
		while (i < len_s1 && ft_inset(*(s1 + i++), set, len_set))
			num_trimmable++;
	}
	else
	{
		i = len_s1 - 1;
		while (i >= 0 && ft_inset(*(s1 + i++), set, len_set))
			num_trimmable++;
	}
	return (num_trimmable);
}

/*
    Allocates and returns a copy of ’s1’ with the characters specified in
    ’set’ removed from the beginning and the end of the string.

    s1:         string to be trimmed
    set:        reference set of characters to trim
    returns:    the trimmed string; NULL if allocation fails
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left;
	size_t	right;
	size_t	len_trimmed;

	left = ft_num_trimmable(s1, set, 1);
	right = ft_num_trimmable(s1, set, 0);
	len_trimmed = ft_strlen(s1) - left - right;
	return (ft_substr(s1, left, len_trimmed));
}