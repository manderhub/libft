/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:11:53 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 12:06:19 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks whether parameter c represents an ascii character,
 * which is any character between 1 and 127 inclusive.
 * 
 * c:		integer to check
 * returns:	1 if c is ascii character and 0 if c is non-ascii character
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
