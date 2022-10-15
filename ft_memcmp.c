/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:45:17 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/15 13:53:01 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;
	
	s1_char = (const unsigned char *)(s1);
	s2_char = (const unsigned char *)(s2);	
	while (n--)
	{
		if (*s1_char != *s2_char)
			break ;
		s1_char++;
		s2_char++;
	}
	return (*s1_char - *s2_char);
}
