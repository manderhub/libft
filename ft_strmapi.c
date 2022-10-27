/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:17:24 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 15:21:01 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function ’f’ to each character of the string ’s’,
 * and passing its index as first argument to create a new string
 * resulting from successive applications of ’f’.
 * 
 * s:		string on which to iterate
 * f:		function to apply to each character
 * returns:	the string created from successive applications of f
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = malloc((ft_strlen(s) + 1) * sizeof(*result));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(result + i) = f(i, *(s + i));
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
