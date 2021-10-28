/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:52:13 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:38 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Find the first occurrence string 'lil' in string 'big'
	and returns a pointer in string 'big'
*/

#include "../../libft.h"

char	*ft_strnstr(const char *big, const char *lil, unsigned int len)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (lil[0] == '\0')
		return ((char *)big);
	while (big[i] && i <= len)
	{
		n = 0;
		while (lil[n] != '\0' && i + n < len && lil[n] == big [i + n])
			n++;
		if (lil[n] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
