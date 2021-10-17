/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:19:25 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/21 10:21:40 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Transforms a unsigned int number into a hexadecimal ASCII string
*/

#include "libft.h"

char	*ft_itoh(unsigned long long n, int letter)
{
	unsigned long long	nbr;
	int					digits;
	char				*dest;

	nbr = n;
	digits = 1;
	while (n / 16 != 0 && digits++)
		n = n / 16;
	dest = malloc(digits + 1);
	if (!dest)
		return (NULL);
	dest[digits] = '\0';
	while (digits > 0 && digits--)
	{
		if ((nbr % 16) <= 9)
			dest[digits] = (nbr % 16) + '0';
		else
			dest[digits] = (nbr % 16) - 10 + letter;
		nbr = nbr / 16;
	}
	return (dest);
}
