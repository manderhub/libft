/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:20:17 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/24 15:13:57 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	len;

	len = strlen(s1);
	result = malloc((len + 1) * sizeof(char));
	if(result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	return (result);
}
