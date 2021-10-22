/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:22:55 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/21 23:57:05 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/so_long.h"

int	count_lines(char *path_map)
{
	int		i;
	int		fd;
	char	*s;

	i = 0;
	fd = open(path_map, O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		i++;
		s = get_next_line(fd);
	}
	printf("\n o valor de i é %i\n ------------------------------------- \n", i);
	return (i);
}
