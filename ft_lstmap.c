/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:58:16 by tykim             #+#    #+#             */
/*   Updated: 2018/12/07 23:13:18 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function takes list of lst (in parameter) and applies function f to each
** link, makes and returns a fresh list. Function acts recursively until end
** of list is reached and newlist is returned.
**
** Create new t_list struct variable newlist. Check that the passed lst and
** function f are both not null.
** If not, run f on link lst and set it to newlist. Assume that f allocates
** memory for newlist based on lst, and check if newlist and next element in
** link lst is null.
**
** We set out newlist element 'next' = to ft_lstmap which will recursively
** handle the next element in lst.
** Once lst->next becomes NULL, will break recursion and return the newlist.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *newlist;

	if (lst != NULL && f != NULL)
	{
		newlist = f(lst);
		if (newlist != NULL && lst->next != NULL)
			newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (NULL);
}
