/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:25:00 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/02 14:00:34 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

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

	ft_print_window(game);
}
