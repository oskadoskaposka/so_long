/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:22:41 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:56:49 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prints a string with unsigned int number 'c' 
// and returns numbers of printed chars.

#include "../../libft.h"

int	ft_print_u(unsigned int c)
{
	int		counter;
	char	*string;

	string = ft_uitoa (c);
	counter = ft_print_s (string);
	free (string);
	return (counter);
}
