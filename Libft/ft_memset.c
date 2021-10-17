/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:12:29 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/07 17:39:01 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copy 'c in 'len' bytes of string 'dest' and returns the string 'dest'.
*/

void	*ft_memset(void *dest,	int c, unsigned int len)
{
	unsigned char	*cdest;
	unsigned int	i;

	cdest = (unsigned char *)dest;
	i = 0;
	while (i < len)
	{
		cdest[i] = (unsigned int)c;
		i++;
	}
	return (dest);
}
