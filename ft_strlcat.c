/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:45:38 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/11 10:11:33 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	len;
	int	i;
	int	n;

	len = ft_strlen(dst);
	i = 0;
	n = size - len - 1;
	while (i < n)
	{
		*(dst + len + i) = *(src + i);
		i++;
	}
	*(dst + len + i) = '\0';
	return (len + ft_strlen(src));
}
