/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:43:50 by tykim             #+#    #+#             */
/*   Updated: 2018/11/05 16:32:56 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat() appends str src to end of dst, at most size - 1 chars, then
** Nul terminate, unless dize is - or original dst > size.
** If src and dst overlap, undefined
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] != '\0' && x < size)
		x++;
	while (src[y] != '\0' && ((x + y + 1) < size))
	{
		dst[x + y] = src[y];
		y++;
	}
	if (x != size)
		dst[x + y] = '\0';
	return (x + ft_strlen(src));
}
