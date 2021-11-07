/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:22:55 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/07 12:56:38 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_count_lines(t_game *game)
{
	int		i;
	int		fd;
	char	*s;

	i = 0;
	fd = open(game->map.path_map, O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		if (game->map.len == 0)
			game->map.len = ft_strlen(s);
		else if (game->map.len != ft_strlen(s))
		{
			ft_printf("\nError!\nMap isn't rectangular");
			return (0);
		}
		s = get_next_line(fd);
		i++;
	}
	free (s);
	s = 0;
	close(fd);
	game->map.lines = i;
	return (i);
}

void	ft_save_map(t_game *game)
{
	int		i;
	int		fd;
	char	*str;

	i = 0;
	fd = open(game->map.path_map, O_RDONLY);
	game->map.map = malloc((game->map.len) * (game->map.lines) * \
	sizeof(char *));
	while (i < game->map.lines)
	{
		str = get_next_line(fd);
		game->map.map[i] = ft_strdup(str);
		free(str);
		str = 0;
		i++;
	}
	free (str);
	str = 0;
}

void	ft_map_configuration(t_game *game)
{
	ft_count_lines(game);
	ft_save_map(game);
	//ft_check_map_values(game);
}
