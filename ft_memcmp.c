/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:45:17 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/18 14:49:59 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.
	Zero-length strings are always identical.

	s1:			first byte string
	s2:			second byte string
	n:			length of s1 and s2 in bytes
	returns:	zero if the two byte strings are identical, otherwise returns
				the differencebetween the first two differing bytes (treated
				as unsigned char values)
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;

	if (n == 0)
		return (0);
	s1_char = (const unsigned char *)(s1);
	s2_char = (const unsigned char *)(s2);
	while (n--)
	{
		if (*s1_char != *s2_char)
			break ;
		s1_char++;
		s2_char++;
	}
	return (*s1_char - *s2_char);
}
