/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:43:05 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:58:58 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strncpy copies at most len characters from src into dst.
** library stddef.h used to allow use of size_t
** Small problem with code: was incrementing one too many times.
** solved by turning (i <= len) into i < len, because it starts at 0 so that
** needs to be included. len = 3 is actually 3 chars 0, 1, 2
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
