/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:22:31 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/07 01:12:55 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates number * bytes of memory, sets them all to zero and return
	a pointer to allocated memory.
*/

#include "libft.h"

void	*ft_calloc(unsigned int number, unsigned int bytes)
{
	int	total;
	int	*dest;

	total = (number * bytes);
	dest = malloc(total);
	if (!dest)
		return (NULL);
	ft_bzero(dest, total);
	return (dest);
}
