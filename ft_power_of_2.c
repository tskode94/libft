/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 13:03:29 by tykim             #+#    #+#             */
/*   Updated: 2018/12/09 13:49:32 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** determines if a given number is a power of 2. returns 1 if true, 0 if f
**
** if the number is 0, return false. If the number divided by 2 has 0 as a
** remainder, divide n by 2.
**
** (expression) ? (if true) : (if false). If eventually n boils down to 1
** it is a power of 2, if not then it is not a power of 2 so return 0.
*/

int	ft_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
