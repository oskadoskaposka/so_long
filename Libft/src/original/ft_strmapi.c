/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 00:18:59 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:32 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns an allocated string with each char modified by f.
*/

#include "../../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len_s;
	char			*dest;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	dest = malloc((len_s + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[len_s] = '\0';
	while (len_s > 0 && len_s--)
		dest[len_s] = f(len_s, s[len_s]);
	return (dest);
}
