/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:40:29 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:13:05 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Converts the initial portion of the ASCII string point to by 'str' 
	to int representation."
*/

#include "../../libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	int			sign;

	i = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign *= (ft_transform_sign(*str));
		str++;
	}
	while (ft_isdigit(*str))
	{
		i = i * 10;
		i = i + (*str - 48);
		str++;
	}
	return (i * sign);
}
