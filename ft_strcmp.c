/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:53:18 by tykim             #+#    #+#             */
/*   Updated: 2018/10/15 18:24:15 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strcmp() compares null-terminated strings s1, s2.
** Returns an integer >,=,< to 0 depending on if s1 is >,=,< to s2.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
