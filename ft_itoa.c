/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tykim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:34:04 by tykim             #+#    #+#             */
/*   Updated: 2018/12/09 15:00:17 by tykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** itoa() allocates memory and returns a 'fresh' string of chars
**
** for the sake of function length, have function itoa_isnegative, which
** takes the given n and the parameter "negative" give in ft_itoa.
**
** If the number is the negative lower max, use strdup (can also be strcpy)
** to the string "-2147483648".
** len starts at 2; every time tmpn is divided by 10 len increases, because
** it adds one more "length" to the string of chars. if the number is neg,
** adds one more space for the - symbol. memory is allocated, null is
** returned if it fails. The very end of the string is ended with a term.
**
** working its way backwards
*/

static void	itoa_isnegative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char		*ft_itoa(int n)
{
	int		tmpn;
	int		len;
	int		negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmpn = n;
	len = 2;
	negative = 0;
	itoa_isnegative(&n, &negative);
	while (tmpn /= 10)
		len++;
	len += negative;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
