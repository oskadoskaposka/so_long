/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 01:22:04 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/11 20:41:31 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Scan the 'len' bytes of str 'b' searching for 'c'.
	If finds it, returns a pointer to 'c' position,
	if doesn't, returns NULL.
*/

#include "libft.h"

const void	*ft_memchr(const void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	*cb;

	i = 0;
	cb = (unsigned char *)b;
	while (i < len)
	{
		if (cb[i] == (unsigned char)c)
			return (&cb[i]);
		i++;
	}
	return (NULL);
}
