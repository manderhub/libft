/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:09:18 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 14:21:06 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char a[0xF0];
	//char b[0xF0];
	
	printf("%p\n", ft_memcpy(NULL, NULL, 0));
	printf("%p\n", ft_memcpy(NULL, NULL, 5));
	printf("%p\n", ft_memcpy(a, NULL, 0));
	printf("%p\n", ft_memcpy(a, NULL, 5));
	return (0);
}
