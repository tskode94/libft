/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:52:27 by tykim             #+#    #+#             */
/*   Updated: 2018/11/06 14:50:57 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strclr assigns '\0' to all characters in a chain.
** Different from bzero.
** 1. strclr changes values of existing char to '\0' to clear existing str
** 2. bzero puts '\0' to placehold in a newly allocated memory zone
**
** unsigned int (further positive reach) just in case string is long
*/

void	ft_strclr(char *s)
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
	}
}
