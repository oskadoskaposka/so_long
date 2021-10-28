/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:49:53 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/07 01:29:39 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Check if 'c' is a printable char according to ASCII table,
	returns 1 if is true and 0 if is false.
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
