/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstremove.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/31 17:17:13 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/31 17:24:35 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove(t_list **lst, t_list *elem, void (*del)(void *, size_t))
{
	t_list curr;
	t_list next;

	curr = *lst;
	if (curr = elem)
	{
		ft_lstdel(lst, del);
	}
	else if (!curr->next)
		ft_lstdelone(	
}
