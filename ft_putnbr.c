/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:56:11 by tykim             #+#    #+#             */
/*   Updated: 2018/11/04 17:08:21 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Displays integer.
** 1. Handles the outlier -2147483648
** 2. If nb is negative, putchar a - and recursively handle -(-nb)
** 3. Recursion. if nb = 213, recursively analyze 213, 21, and 2.
** at 2, last else loop. + '0' gives it a char value.
** not rounded since int, 21 gets % 10 to 1, which is printed.
** nb = 2, nb = 21, nb = 213. all analyzed recursively
*/

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
