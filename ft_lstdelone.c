/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:48:26 by tykim             #+#    #+#             */
/*   Updated: 2018/11/06 14:55:50 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lstdelone() tskes in - as a param - address of a pointer on a link
** frees the memory content of link with 'del' (passed as a param too)
** memory of next element should never be freed, alst = NUll to terminate
**
** 1st, check parameters are not NULL.
** If true, run parameter passed function del with link alst's content and
** content size.
** Once the function has deleted alst's contents, we free the memory
** allocated to alst and set it to NULL, thus deleting on link in our list
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (del != NULL && alst != NULL)
	{
		del((**alst).content, (**alst).content_size);
		free(*alst);
		*alst = NULL;
	}
}
