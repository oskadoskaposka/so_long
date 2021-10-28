/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 00:18:36 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:13:09 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copy the bytes from string 'src' to string 'dest'. 
	Interrupt when 'c' is copied or 'len' bytes are copied.

	If 'c' is copied returns a pointer to dest, if 'len' bytes
	are copied return 'NULL'.
*/

#include "../../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int len)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	while (len > 0)
	{
		*cdest = *csrc;
		cdest++;
		if (*csrc == (char)c)
			return ((void *)cdest);
		csrc++;
		len--;
	}
	return (NULL);
}
