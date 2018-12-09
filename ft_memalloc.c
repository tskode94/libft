/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:15:40 by tykim             #+#    #+#             */
/*   Updated: 2018/10/25 13:48:11 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function designed to allocate and return fresh zone of memory.
** memory allocated, initialized to 0 using b_zero, If allocations fails
** return NULL.
**
** First, void variable of pointer m. (so we can use the memory that
** will be applied to it for any data type).
** Second, use malloc to allocate memory memory to 'm' based on 'size'.
** Use bzero to fill with 0, then return m.
*/

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = malloc(size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, size);
	return (m);
}
