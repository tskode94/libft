/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:06:30 by tykim             #+#    #+#             */
/*   Updated: 2018/12/05 16:51:27 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstnew() will allocate memory for and return a 'fresh' linked list.
**
** **if content is null, content_size is automatically 0. element of next
** initialized to NULL regardless - seen below.
**
** new t_list structure new, allocate memory for it. Just in case it failed,
** be ready to return NULL. If not, allocate mem for content using
** content_size. If not null, we use ft_memmove to move data from the
** params to linked new's content element. Finally, set our link's new
** content_size to the give param content_size.
**
** set new's next element to NULL so we are at the end of the list. return
** the new link.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
