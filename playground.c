/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:09:18 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/19 17:09:23 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char a[0xFF];
	char b[0xFF];
	memset(a, 'a', 0xFF);
	memset(b, 'a', 0xFF);
	memmove(a, "Bonjour, ", 10);
	memmove(b, "", 10);
	//printf("%lu\n", ft_strlcpy(NULL, NULL, 0));
	//printf("%lu\n", ft_strlcpy(NULL, NULL, 5));
	printf("%lu\n", ft_strlcpy(a, "", 10));
	printf("%s\n", a);
	return (0);
}
