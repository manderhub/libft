/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:29 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 17:01:59 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Writes n zero bytes ('\0') to the string s.
	
	s:	destination string
*/
void	ft_bzero(void *s, size_t n)
{
	char	*s_char;

	s_char = (char *)(s);
	while (n--)
	{
		*s_char = '\0';
		s_char++;
	}
}
