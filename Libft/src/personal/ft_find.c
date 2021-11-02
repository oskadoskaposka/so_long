/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:14:44 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/02 16:20:01 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_find(char *str, char c)
{
	int	i;

	i = 0;
	if (!*str || !c)
		return (NULL);
	while(*str != c)
	{
		if (*str == NULL)
			return (NULL);
		str++;
		i++;
	}
	return (i);
}