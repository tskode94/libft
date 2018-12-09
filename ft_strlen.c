/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 13:32:08 by tykim             #+#    #+#             */
/*   Updated: 2018/09/26 21:57:59 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strlen function computes length of string s.
** stdio.h is included to allow us to declare size_t, while library.h is
** included to have seperate main and function files.
*/

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
