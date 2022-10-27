/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manderhu <manderhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:41:25 by manderhu          #+#    #+#             */
/*   Updated: 2022/10/27 13:01:07 by manderhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the node 'new' to the end of the list.
 * 
 * lst:	address of a pointer to the first element of a list
 * new:	pointer to the node that should be added to the end of the list
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_last;

	if (!lst)
		return ;
	current_last = ft_lstlast(*lst);
	if (!current_last)
		*lst = new;
	else
		current_last->next = new;
}
