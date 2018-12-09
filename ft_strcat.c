/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:06:05 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:55:21 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strcat() append a copy of null-terminated string s2 to the end of string s1
** (then add terminating \0)
** create two counters, i which counts to the end of s1. s2 is copied into
** where s1 ends. s1 then gets a null-terminating character.
** RETURN VALUE: return pointer s1.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
