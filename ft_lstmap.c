/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:09:11 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/26 15:33:53 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates the list 'lst' and applies the function 'f' on the content of
 * each node. Creates a new list resulting of the successive applications
 * of the function 'f'. The 'del' function is used to delete the content of
 * a node if needed.
 * 
 * lst:		pointer to a node
 * f:		address of the function used to iterate on the list
 * del:		address of the function used to delete the content of a node
 * returns:	the new list; NULL if allocation fails
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (new_node == NULL && start == NULL)
			return (NULL);
		if (start == NULL)
			start = new_node;
		else
		{
			if (new_node == NULL)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new_node);
		}
		lst = lst->next;
	}
	return (start);
}
