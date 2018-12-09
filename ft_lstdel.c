/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:10:04 by tykim             #+#    #+#             */
/*   Updated: 2018/12/03 18:20:23 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function takes address of pointer on a link. Using 'del', frees memory of
** this link and all following links. To terminate link, the pointer on the
** first link, once freed, should be set to NULL.
**
** 1. Declare two link structures tmp and next
** 2. set tmp link to hold the link pointed to in parameter (alst)
** 3. check that function del passed in param is not NULL
** 4. while loop - if tmp = NULL, we have reached end of list
** 5. take current link's element next (the link following it) and place it
** into the link variable next, seperating it from our current link.
** 6. run del, give it parameters: our current link's content element,
** content_size element.
** 7. Free the memory allocated in tmp variable, then set our next var,
** currently holding the link following the one just deleted, and put it into
** tmp and loop again.
** 8. after, set alst to NULL. effectively deletes the parameter passed link,
** and all followint it.
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *alst;
	if (del != NULL)
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = next;
		}
		*alst = NULL;
	}
}
