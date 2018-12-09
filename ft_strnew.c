/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:36:13 by tykim             #+#    #+#             */
/*   Updated: 2018/10/25 14:56:35 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strnew allocates memory and returns a 'fresh' string that ends with '\0'
** Each character in string is \0.
** Cast as char string, +1 to ensure the \0 terminating character
**
** Able to set each character as \0 because ft_memalloc uses ft_bzero
*/

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}
