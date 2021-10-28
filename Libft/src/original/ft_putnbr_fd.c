/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:05:13 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:13:55 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write in file descriptor 'fd' the int 'n'.
*/

#include "../../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;
	int			printar;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i *= -1;
	}
	if (i < 10)
	{
		printar = i + 48;
		ft_putchar_fd(printar, fd);
		return ;
	}
	else
		ft_putnbr_fd(i / 10, fd);
	ft_putnbr_fd(i % 10, fd);
}
