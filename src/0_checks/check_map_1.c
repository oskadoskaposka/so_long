/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:56:49 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 14:24:08 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_check_extension(t_game *game)
{
	char	*ext;

	ext = ft_substr(game->map.path_map, ft_strlen(game->map.path_map) - 4, 4);
	if (ft_strncmp(ext, ".ber", 4) == 0)
		return (1);
	else
		return (0);
}

int	ft_check_walls(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < game->map.len)
	{
		if (game->map.map[0][x] != 1)
			return (0);
		if (game->map.map[game->map.lines - 1][x] != 1)
			return (0);
		x++;
	}
	while (y < game->map.lines)
	{
		if (game->map.map[y][0] != 0)
			return (0);
		if (game->map.map[y][game->map.len - 1] != 1)
			return (0);
	}
	return (1);
}

int	ft_check_player(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < game->map.lines)
	{
		while (x < game->map.len)
		{
			if (game->map.map[y][x] == 'P')
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}

int	ft_check_exit(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < game->map.lines)
	{
		while (x < game->map.len)
		{
			if (game->map.map[y][x] == 'E')
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}
