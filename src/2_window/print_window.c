/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:12:51 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 14:00:11 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_print_window(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < game->map.lines)
	{
		while (i < game->map.len)
		{
			mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
			game->img.floor.img, (i * 50), (j * 50));
			ft_print_item(game, game->map.map[j][i], (i * 50), (j * 50));
			i++;
		}
		i = 0;
		j++;
	}
}

void	ft_print_item(t_game *game, char c, int i, int j)
{
	if (c == '1')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
		game->img.wall.img, i + 10, j);
	else if (c == 'C')
	{
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
		game->img.pickup.img, i, j);
		game->map.picks_temp += 1;
	}
	else if (c == 'E')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
		game->img.gateway.img, i, j);
	else if (c == 'P')
	{
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
		game->img.player.img, i, j);
		game->map.pl_len = (i / 50);
		game->map.pl_line = (j / 50);
	}
}

void	ft_save_state(t_game *game)
{
	game->map.picks = game->map.picks_temp;
}
