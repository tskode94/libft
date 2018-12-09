/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:16:00 by tykim             #+#    #+#             */
/*   Updated: 2018/11/05 16:48:57 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** exactly the same as putchar, except file descriptor is a parameter
** choose if we want fd from system call, or:
** 0 (std input)
** 1 (std output)
** 2 (std error)
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
