/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:22:55 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 01:09:49 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_count_lines(t_map *map)
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
	free (s);
	s = 0;
	close(fd);
	map->lines = i;
	return (i);
}

void	ft_save_map(t_map *map)
{
	int		i;
	int		fd;
	char	*str;

	i = 0;
	ft_count_lines(map);
	fd = open(map->path_map, O_RDONLY);
	map->map = malloc((map->len) * (map->lines) * sizeof(char *));
	while (i < map->lines)
	{
		str = get_next_line(fd);
		map->map[i] = ft_strdup(str);
		free(str);
		str = 0;
		i++;
	}
	free (str);
	str = 0;
}

void	ft_map_configuration(void)
{
	t_map	map;

	map.path_map = "src/map/map.ber";
	ft_save_map(&map);
	ft_check_map_values(&map);
}
