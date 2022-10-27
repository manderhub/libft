/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:29 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 12:03:01 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Writes n zero bytes ('\0') to the string s.
 * 
 * s:	destination string
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
