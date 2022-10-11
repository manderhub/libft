/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:52:13 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 16:47:34 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Writes len bytes of value c to the string b.
	
	b:		destination buffer
	c:		value to be written (converted to unsigned char)
	len:	number of bytes to be written
	returns the destination buffer
*/
void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_char;

	b_char = (char *)(b);
	while (len--)
	{
		*b_char = (unsigned char)(c);
		b_char++;
	}
	return (b);
}
