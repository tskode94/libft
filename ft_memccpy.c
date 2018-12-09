/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:17:22 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:53:10 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memccpy() copies bytes from string src to dst. If char c
** (as converted to an UNSIGNED INTEGER) occurs in src,
** copy stops and a pointer to the byte after the copy of c
** in the string dst returned.
** src and dst should not overlap.
**
** If casted s (unsigned char) at position i = c (also UC), then we return a
** char casted pointer to the index position after it, in original dst.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
