/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:20:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:49 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a new allocated string from a piece of string 's' 
	and return this new string.
*/

#include "../../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	size;

	i = 0;
	dest = malloc ((len + 1) * sizeof(char));
	if (!dest || !s)
		return (NULL);
	size = ft_strlen(s);
	while (((start + i) < size) && (s[start + i] != '\0') && (i < len))
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
