/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 01:36:22 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/07 16:05:49 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Compare the diference between 'len' bytes of string 's1' and 
	'len' bytes of string 's2'. Returns a positive value if 
	's1' is bigger, a negative value if 's2' is bigger and
	a 0 if both strings are equal.
*/

int	ft_memcmp(const void *s1, const void *s2, unsigned int len)
{
	unsigned int	i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (i < len)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}
