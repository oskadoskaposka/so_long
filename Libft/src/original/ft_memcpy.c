/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 00:05:02 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:13:33 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copy 'len' bytes from 'src' to 'dest', not safe from overlaping.
*/

#include "../../libft.h"

void	*ft_memcpy(void *dest, const char *src, unsigned int len)
{
	char	*cdest;
	char	*csrc;

	if (!dest && !src)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)src;
	while (len > 0)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		len--;
	}
	return (dest);
}
