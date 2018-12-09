/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:16:12 by tykim             #+#    #+#             */
/*   Updated: 2018/12/09 14:54:35 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** atoi() converts str to int representation.
**
** The sign holds the value of + or -. The r holds the result.
** The equation r = r*10 + str[i] - '0' is such that we go down the string,
** converting numbers from str to int. The ascii value of 0 is then subtracted
** to give an ascii value to r.
*/

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			r;
	long			sign;

	r = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return ((int)(r * sign));
}
