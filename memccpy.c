/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:53 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 10:20:06 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_char;
	char	*src_char;

	dest_char = (char *)(dest);
	src_char = (char *)(src);
	while (n--)
	{
		if (*src_char == c)
			break ;
		*dest_char = *src_char;
		dest_char++;
	src_char++;
	}
	return (dest);
}
