/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:50:00 by tykim             #+#    #+#             */
/*   Updated: 2018/11/06 14:46:58 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memdel takes in the parameter of the address of a pointer. The zone
** pointed to should be liberated with free. Pointer is then set to NUll
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
