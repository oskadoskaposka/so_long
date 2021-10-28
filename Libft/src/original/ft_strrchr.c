/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:01:15 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:42 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Find the last occurrence of char 'c' in the string 's' 
	and returns a pointer.
*/

#include "../../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end_s;

	end_s = ft_strchr(s, '\0');
	while (*end_s != (unsigned char)c)
	{
		if (end_s == s)
			return (NULL);
		end_s--;
	}
	return ((char *)end_s);
}
