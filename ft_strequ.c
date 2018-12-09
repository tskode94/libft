/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:39:42 by tykim             #+#    #+#             */
/*   Updated: 2018/11/07 15:24:48 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographically compares strings s1 and s2
** returns a 1 if equal, otherwise it returns a 0.
**
** if ft_strcmp returns > or < than 0 (thus not equal) then return 0
** otherwise return 1
**
** Segmentation protection: if either s1 or s2 are null, return -1
*/

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (-1);
	return (ft_strcmp(s1, s2) ? 0 : 1);
}
