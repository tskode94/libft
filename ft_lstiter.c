/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:53:20 by tykim             #+#    #+#             */
/*   Updated: 2018/11/06 14:56:06 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lstiter() takes function f, passed in parameters, and applies it
** to every link in the linked list.
** 1st, check the parameter of function f is not NUll.
** If not, start a loop through the linked list, applying f to each link
*/

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	if (f != NULL)
	{
		while (lst != NULL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
