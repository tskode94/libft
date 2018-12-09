/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:42:21 by tykim             #+#    #+#             */
/*   Updated: 2018/11/14 16:36:05 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strjoin() allocates memory for and returns 2 strings combined into 1
** + 1 memory allocation to account for terminating \0
** if(!s1 || !s2) sorts out the segmentation fault, stating that if the
** strings are null or otherwise, return null.
** write s1 first, then s2. Ensure the string ends with a terminating \0
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
