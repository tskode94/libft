/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:47:30 by tykim             #+#    #+#             */
/*   Updated: 2018/12/07 23:11:55 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strsplit() splits a given string by given char c then allocates mem for
** and returns a fresh table of strings.
**
** 1. Word counting function, to determine how many strings we are placing
** in our table. needed for allocating table memory. The first loop states
** that as long as the string isn't at its end, count through c chars;
** at the first letter of a 'word', add a counter; then pass over the word
** until returning to the first while loop. return counter.
**
** 2. variation of strdup(), which copies at most n chars from string s1,
** does the copy, and returns a pointer to it. the copied string is
** always null-terminated.
**
** 3. strsplit. We use allocate memory for the table based on the ft_wrdcnt
** function. While the string is not over, count - use j as a index for
** the first word in the string. We set the value in table tab as:
** ft_strndup(s+j, i=j), where s+j states the given string at the position
** of the desired word, and i-j states the length of the word (the n).
** the two while loops are gone through FULLY first before we get to the
** if. Eventually, end the table with a null and return it.
*/

static int	ft_wrdcnt(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**tab;

	i = 0;
	k = 0;
	if (!s || (!(tab = (char **)malloc(sizeof(char *) *
					(ft_wrdcnt(s, c)) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
