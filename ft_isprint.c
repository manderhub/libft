/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:58 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 12:13:26 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks whether parameter c is a printable character,
 * which is any character between 32 and 126 inclusive.
 * 
 * c:		integer to check
 * returns:	1 if c is printable and 0 if c is non-printable
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
