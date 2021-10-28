/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:20:30 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/27 23:13:46 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	write char 'c' in the file descriptor 'fd'
*/

#include "../../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
