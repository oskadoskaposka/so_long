/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:31:52 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:56:41 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prints a string with hexadecimal number 'c' 
// and returns numbers of printed chars.

#include "../../libft.h"

int	ft_print_p(unsigned long long c, int letter)
{
	int		counter;
	char	*string;

	string = ft_itoh (c, letter);
	ft_print_s ("0x");
	counter = ft_print_s (string) + 2;
	free (string);
	return (counter);
}
