/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:09:11 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/29 13:41:43 by manderhu         ###   ########.fr       */
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
	t_list	*result;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			if (result)
				ft_lstclear(&result, del);
			return (NULL);
		}
		if (!result)
			result = new_node;
		else
			ft_lstadd_back(&result, new_node);
		lst = lst->next;
	}
	return (result);
}
