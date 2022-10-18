/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:29 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/18 16:38:16 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// CAN PROBAbLY USE ft_memset for this

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

void	ft_bzero_alt(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
