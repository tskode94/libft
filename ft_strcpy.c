/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:42:20 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:56:32 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strcpy copies string src to dst (including \0). Thus the insert of
** dst[i] = '\0' which is assigned after src has been moved to dst.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
