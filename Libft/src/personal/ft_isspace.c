/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:08:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:15:10 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Check if 'c' is a space-type char in ASCII table, 
	returns 1 if is true and 0 if is false.
*/

#include "../../libft.h"

int	ft_isspace(char c)
{
	if (c == 32 || c == 12 || c == 10 || c == 13 || c == 9 || c == 11)
	{
		return (1);
	}
	return (0);
}
