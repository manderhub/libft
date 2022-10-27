/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:36:44 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 15:04:17 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function 'f' on each character of the string passed as argument,
 * passing its index as first argument.
 * Each character is passed by address to 'f' to be modified if necessary.
 * 
 * s:	string on which to iterate
 * f:	function to apply to each character
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*(s + i))
	{
		f(i, (s + i));
		i++;
	}
}
