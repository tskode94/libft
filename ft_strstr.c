/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 16:28:59 by tykim             #+#    #+#             */
/*   Updated: 2018/11/04 17:14:24 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates 1st occurence of null-terminated string s1 in n-t string s2
** If needle (s2) is empty, haystack (s1) returned.
**
** while haystack s1 DNE \0, i counter +. If part of s2 is found in s1,
** counter j goes up. If end of s2 (\0) reached, position of s2 in s1
** returned, + i to account for the "pre" counter
** if s2 occurs nowhere in s1, NULL returned
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0' && s1[i + j] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
