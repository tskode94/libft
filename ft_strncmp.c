/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:58:34 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:58:30 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strncmp() compares not more than n chars, otherwise identical to strcmp()
** i < n - 1 to account for i = 0 starting position
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
