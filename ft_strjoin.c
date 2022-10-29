/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:33:33 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 17:16:07 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates and returns a new string, which is the result of the
 * concatenation of 's1' and 's2'.
 * 
 * s1:		prefix string
 * s2:		suffix string
 * returns:	the new concatenated string; NULL if allocation fails
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatenation;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	concatenation = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (concatenation == NULL)
		return (NULL);
	ft_memmove(concatenation, s1, len_s1);
	ft_memmove(concatenation + len_s1, s2, len_s2);
	return (concatenation);
}
