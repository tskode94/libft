/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:57:03 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:57:25 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strdup() allocates memory for copy of string s1, copies, then returns
** a pointer to it.
** If insufficient memory is avaliable, NULL is returned.
** str = (char *) malloc(sizeof(char) * (len + 1));
** malloc is allocating memory (len+1 char's worth).
** It is then converted to char.
** If insufficient memory is avaliable (str == NULL),
** then the func returns NULL.
*/

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
