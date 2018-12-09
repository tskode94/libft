/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:08:03 by tykim             #+#    #+#             */
/*   Updated: 2018/09/27 17:17:20 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strncat() appends a copy of s2 to end of s1, then adds termination \0
** until n is reached, s2 is copied into the end of s1
**
** RETURN VALUE: return pointer s1
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
