/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:08:00 by tykim             #+#    #+#             */
/*   Updated: 2018/12/08 15:14:28 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_swap() from the examshell. We use swap as a placeholder for a while we
** swap the contents of a and b.
*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
