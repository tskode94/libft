/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 13:53:34 by tykim             #+#    #+#             */
/*   Updated: 2018/12/09 14:19:31 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function reverses (in-place) a string and returns its parameter.
**
** assign two counters i and j, as well as placeholder tmp. i counts to the
** end of the string, then back one (to account for terminating \0.
** while j (the front counter) is less than i (the back counter), start
** while loop.
** assign last char of string to tmp, then assign first char to last char,
** then assigns the first char of tmp to end. tmp is a placeholder because s
** is changing as we assign it.
*/

char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
	return (s);
}
