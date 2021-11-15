/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:28:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 18:43:17 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_create_window(t_game *game)
{
	game->mlx.ptr = mlx_init();
	game->mlx.ptr_win = mlx_new_window(game->mlx.ptr, (game->map.len * 50), \
	(game->map.lines * 50), "so_long");
}

void	ft_config_images(t_game *game)
{
	game->img.floor.img = mlx_xpm_file_to_image(game->mlx.ptr, \
	"imgs/floor.xpm", &game->img.floor.x, &game->img.floor.y);
	game->img.gateway.img = mlx_xpm_file_to_image(game->mlx.ptr, \
	"imgs/exit.xpm", &game->img.gateway.x, &game->img.gateway.y);
	game->img.pickup.img = mlx_xpm_file_to_image(game->mlx.ptr, \
	"imgs/pickup.xpm", &game->img.pickup.x, &game->img.pickup.y);
	game->img.player.img = mlx_xpm_file_to_image(game->mlx.ptr, \
	"imgs/hero.xpm", &game->img.player.x, &game->img.player.y);
	game->img.wall.img = mlx_xpm_file_to_image(game->mlx.ptr, \
	"imgs/wall.xpm", &game->img.wall.x, &game->img.wall.y);
}

void	ft_destroy_images(t_game *game)
{
	mlx_destroy_image(game->mlx.ptr, game->img.floor.img);
	mlx_destroy_image(game->mlx.ptr, game->img.gateway.img);
	mlx_destroy_image(game->mlx.ptr, game->img.pickup.img);
	mlx_destroy_image(game->mlx.ptr, game->img.player.img);
	mlx_destroy_image(game->mlx.ptr, game->img.wall.img);
}
