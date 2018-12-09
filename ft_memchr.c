/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:06:17 by tykim             #+#    #+#             */
/*   Updated: 2018/11/04 17:39:42 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memchr() locates first occurence of c in string s
** returns a pointer to the byte located,
** or NULL if no such byte exists within n bytes
**
** create char pointer *str, place casted version of s parameter
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
