/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:22:55 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/22 02:19:19 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	count_lines(t_map *map)
{
	int		i;
	int		fd;
	char	*s;

	i = 0;
	fd = open(map->path_map, O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		map->len = ft_strlen(s);
		s = get_next_line(fd);
		i++;
	}
	map->lines = i;
	return (i);
}

int	save_map(t_map *map)
{
	count_lines(&map);
	map->map = malloc((map->len)*(map->lines)*sizeof(char *));
	return (0);
}
