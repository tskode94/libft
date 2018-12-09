/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 20:13:32 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:55:39 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strchr() locates first occurence of c in string s and returns a
** pointer to the located chararcter.
**
** Difficulties when returning ((char *)&s[i]). s[i] is a character in
** the string, &s[i] is pointing to the address of the character in the string
*/

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
