/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:20:05 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 23:09:11 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Compares two strings lexicographically.
	Only compares a maximum of n characters.
	Characters that appear after the first '\0' are not compared.

	s1:	first string
	s2:	second string
	n:	number of characters to be compared
	returns	1, 0 or -1 depending on whether s1 is greater than,
			equal to or less than s2
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1)
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0' || *(s1 + i) != *(s2 + i))
			break ;
		i++;
	}
	if ((unsigned char)*(s1 + i) < (unsigned char)*(s2 + i))
		return (-1);
	else if ((unsigned char)*(s1 + i) > (unsigned char)*(s2 + i))
		return (1);
	else
		return (0);
}
