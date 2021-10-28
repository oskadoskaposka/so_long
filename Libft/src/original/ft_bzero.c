/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 01:56:10 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/07 01:12:29 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Writes 'len' zeroed bytes to the string 'str'. If 'len' is zero, 
	ft_bzero does nothing. Another way of saying this is that we will
	be making a string of size 'len' and filling each index position 
	with a \0.
*/

void	ft_bzero(void *str, unsigned int len)
{
	unsigned int	i;
	unsigned char	*cstr;

	i = 0;
	cstr = str;
	while (i < len)
	{
		cstr[i] = '\0';
		i++;
	}
}
