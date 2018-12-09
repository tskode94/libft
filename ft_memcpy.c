/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 19:52:34 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:54:29 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memcpy() copies n bytes from memory area src to memory area dst
** If src and dst overlap, behaviour undefined
** return original value of dst
**
** size_t i: unsigned int, only looping if i < n
** Two char pointer variables. Cast given parameter strings (*dst, *src)
** into d and s char pointer variables
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
