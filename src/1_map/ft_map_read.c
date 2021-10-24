/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:22:55 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:48:33 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_count_lines(t_config *config)
{
	int		i;
	int		fd;
	char	*s;

	i = 0;
	fd = open(config->map->path_map, O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		config->map->len = ft_strlen(s);
		s = get_next_line(fd);
		i++;
	}
	free (s);
	s = 0;
	close(fd);
	config->map->lines = i;
	return (i);
}

void	ft_save_map(t_config *config)
{
	int		i;
	int		fd;
	char	*str;

	i = 0;
	fd = open(config->map->path_map, O_RDONLY);
	config->map->map = malloc((config->map->len) * (config->map->lines) * sizeof(char *));
	while (i < config->map->lines)
	{
		str = get_next_line(fd);
		config->map->map[i] = ft_strdup(str);
		free(str);
		str = 0;
		i++;
	}
	free (str);
	str = 0;
}

void	ft_map_configuration(t_config *config)
{
	config->map->path_map = "src/1_map/map.ber";
	ft_count_lines(config);
	ft_save_map(config);
	//ft_check_map_values(config);
}
