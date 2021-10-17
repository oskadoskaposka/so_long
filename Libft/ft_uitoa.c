/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:19:25 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/19 23:21:10 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Transforms a unsigned int number into a ASCII string
*/

#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	long long int	nbr;
	int				digits;
	char			*dest;

	nbr = n;
	digits = 1;
	while (n / 10 != 0 && digits++)
		n = n / 10;
	dest = malloc(digits + 1);
	if (!dest)
		return (NULL);
	dest[digits] = '\0';
	while (digits > -1 && digits--)
	{
		dest[digits] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (dest);
}
