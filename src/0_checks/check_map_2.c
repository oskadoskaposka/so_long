/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:21:43 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/21 18:37:14 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_check_collect(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < game->map.lines)
	{
		while (x < game->map.len)
		{
			if (game->map.map[y][x] == 'C')
				return (1);
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}

int	ft_check_rect(t_game *game)
{
	int	y;
	int	x;
	int	temp;

	y = 0;
	x = ft_strlen(game->map.map[y]);
	temp = x;
	while (y <= game->map.lines)
	{
		if (y == game->map.lines)
			x = x + 1;
		if (x != temp)
			return (0);
		temp = x;
		x = ft_strlen(game->map.map[y]);
		y++;
	}
	return (1);
}
