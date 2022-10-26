/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:49:02 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/26 13:06:21 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates the list 'lst' and applies the function 'f' on
 * the content of each node.
 * 
 * lst:	pointer to a node
 * f:	address of the function to be applied to each node of the list
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
