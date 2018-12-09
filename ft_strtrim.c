/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:55:09 by tykim             #+#    #+#             */
/*   Updated: 2018/11/28 16:14:29 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strtrim() "trims" the blank spaces at the beginning and end of a string
** ' ', \t, \n considered spaces
**
** if given char const *s is null or empty, return (NULL) to avoid seg. fault
** use i as a counter for trimming the beginning of a string. If the string
** is empty or immediately terminated, we return a NULL string.
** This is done with by allocating 2 char's worth of memory with ft_memalloc
** and using ft_strcpy to copy "" into it, effectively creating a null str
**
** we set j as ft_strlen(s) - 1 to account for the terminating \0, and count
** backwards to hold values for i and j, which are front and back-end
** counters respectively.
** If the pointer char str isnt the predicted malloc'd size of j - i + 2,
** return NULL
** use a counter k to write the values of s into str, and terminate with \0
*/

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(str = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
