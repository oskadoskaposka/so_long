/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:40:58 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/21 02:10:41 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Transforms a int number into a ASCII string
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	neg;
	long long int	nbr;
	int				digits;
	char			*dest;

	neg = n < 0;
	nbr = n;
	if (neg)
		nbr = nbr * -1;
	digits = 1;
	while (n / 10 != 0 && digits++)
		n = n / 10;
	dest = malloc(neg + digits + 1);
	if (!dest)
		return (NULL);
	dest[neg + digits] = '\0';
	if (neg)
		dest[0] = '-';
	while (digits > 0 && digits--)
	{
		dest[neg + digits] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (dest);
}
