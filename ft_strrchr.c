/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:21:40 by tykim             #+#    #+#             */
/*   Updated: 2018/11/04 17:23:40 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strrchr() locates last occurence of c
** Relatively straightforward, starts a counter working backwards from
** full string length. If c is found, returns the char representation of
** address of c found in string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != (char)c)
		--i;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
