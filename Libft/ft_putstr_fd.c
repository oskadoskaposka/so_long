/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:31:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/25 12:01:46 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	write the string 'str' in file descriptor 'fd'. 
*/

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return ;
	while (*str != '\0')
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}
