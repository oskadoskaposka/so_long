/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:37 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:14:35 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Compare the 'n' bytes of strings 's1' and 's2' 
	and returns the diference.
*/

#include "../../libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while ((cs1[i] || cs2[i]) && i < n)
	{
		if (cs1[i] != cs2[i])
		{
			return (cs1[i] - cs2[i]);
		}
		i++;
	}
	return (0);
}
