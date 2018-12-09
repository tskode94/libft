/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:59:45 by tykim             #+#    #+#             */
/*   Updated: 2018/11/14 16:09:07 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strmap() applies given func f to each char of give string, returns
** 'fresh' copy of changed string
**
** 1. unsigned int x as a counter, char var for our string to be returned
** 2. allocate memory to make copy of modified str, +1 for \0
** 3. apply function f to each char in s, move that to str
** end str with a terminating \0, return str
**
** Protecting against Segmentation Fault:
** if (!s) return NULL line added BEFORE variables defined.
*/

char	*ft_strmap(const char *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
