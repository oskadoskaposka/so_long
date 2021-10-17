/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:27 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/07 21:06:13 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Concatenate 'size' bytes of the string 'src' to string 'dest',
	if 'dest' length is bigger than 'size', returns 'size' plus
	'src' length. Else returns the size of 'src' plus the size of
	'dest' plus 1.
*/

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	size_dest;

	size_dest = ft_strlen(dest);
	if (size_dest >= size)
		return (size + ft_strlen(src));
	while (*src && ((size_dest + 1) < size))
	{
		*(dest + size_dest) = *src;
		size_dest++;
		src++;
	}
	*(dest + size_dest) = '\0';
	return (ft_strlen(src) + size_dest);
}
