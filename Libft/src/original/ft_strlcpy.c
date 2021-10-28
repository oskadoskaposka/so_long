/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:30 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:27 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copies 'size' number of bytes from string 'src' to string 'dest',
	and returns the length of 'src'.
*/

#include "../../libft.h"

int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!src)
		return (0);
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
