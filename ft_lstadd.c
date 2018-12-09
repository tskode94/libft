/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:30:12 by tykim             #+#    #+#             */
/*   Updated: 2018/11/28 14:45:05 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** adds a new link called 'new' to a list and placing this link at the head
**
** check to make sure link new is not NULL. If not, set our link new's
** element next to the first link that is pointed to by alst.
** then set the pointer of alst to new, setting it to head of our linkedlist
** Arrow Operator: new->next is equivalent to (*new).next, where it gets
** the member called 'next' from the struct that new points to.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
