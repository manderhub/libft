/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:18:37 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/26 15:38:52 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates and returns a new node. The member variable ’content’ is
	initialized with the value of the parameter ’content’.
	The variable ’next’ is initialized to NULL.

	content:	content to create the node with
	returns:	the new node; NULL if allocation failed
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list) * 1);
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
