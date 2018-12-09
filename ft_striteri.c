/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:22:44 by tykim             #+#    #+#             */
/*   Updated: 2018/11/07 14:31:53 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** striteri applies f to each char of a stringat precisely that char's
** index string position.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
