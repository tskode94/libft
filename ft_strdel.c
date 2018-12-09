/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:41:35 by tykim             #+#    #+#             */
/*   Updated: 2018/11/06 14:47:53 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** parameter = address to a chain of characters
** should be freed and set to NULL
**
** run the ft_memdel function and cast the pointer address as a void
** that we put into ft_memdel's parameter
*/

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
