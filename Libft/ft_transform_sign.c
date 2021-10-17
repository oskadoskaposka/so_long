/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform_sign.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:40:29 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/11 20:40:11 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns '-1' if char 'c' is negative sign or '1' if anything else.
*/

#include "libft.h"

int	ft_transform_sign(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}
