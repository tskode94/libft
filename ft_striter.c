/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:07:45 by tykim             #+#    #+#             */
/*   Updated: 2018/11/07 14:31:50 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function applies param f to each character in a string param s
**
** string s + variable i = easy way to send address of a string position
*/

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(s + i);
			i++;
		}
	}
}
