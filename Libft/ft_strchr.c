/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:28:28 by apaduan-          #+#    #+#             */
/*   Updated: 2021/07/25 22:12:42 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	search the int 'c' in the string 's', if find it, returns a pointer 
	to 'c' in the string 's', if doesn't, return NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!*s || !c)
		return (NULL);
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
