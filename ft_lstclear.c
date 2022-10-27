/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:27:58 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 13:07:10 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes and frees the given node and every successor of that node,
 * using the function 'del' and free.
 * Finally, the pointer to the list is set to NULL.
 * 
 * lst:	address of a pointer to a node
 * del:	address to the function to be used to delete the content of
 * the nodes
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*del_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del_next = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(del_next, del);
	}
}
