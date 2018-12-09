/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 12:56:26 by tykim             #+#    #+#             */
/*   Updated: 2018/12/09 13:00:36 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function takes a string and reverses the case of all its letters
*/

char	ft_ulstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			ft_putchar(s[i] + 32);
		else if (s[i] >= 'a' && s[i] <= 'z')
			ft_putchar(s[i] - 32);
		else
			ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
	return (*s);
}
