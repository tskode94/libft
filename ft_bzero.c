/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:17:25 by tykim             #+#    #+#             */
/*   Updated: 2018/11/15 12:45:57 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** bzero() writes n zeroed bytes to string s. if n is 0, bzero does nothing
** we make a string of size n and fill each position with 0.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
