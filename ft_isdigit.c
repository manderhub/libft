/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:38:28 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 13:01:46 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Checks whether parameter c is a decimal digit character.

	c:	integer to check
	returns 1 if c is digit and 0 if c is non-digit
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
