/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:37:59 by tykim             #+#    #+#             */
/*   Updated: 2018/11/14 15:48:21 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memmove() copies len bytes from string src to dst.
** The two strings may overlap, copy is done non-destructively.
** memmove allows a copy to be done even if dst and src are overlapping.
**
** cast src and dst to char pointers. If src is less than dst, work backwards
** with the counter i set as length. If src is less than dst, work normally
** from 0.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	if (src == dst)
		return (dst);
	csrc = (char *)src;
	cdst = (char *)dst;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			cdst[i] = csrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
