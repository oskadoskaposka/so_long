/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:25:00 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 21:41:22 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_config_images(t_game *game)
{
	game->img.floor.img = mlx_xpm_file_to_image(game->mlx.ptr, "../imgs/chao50x50.xpm", &game->img.floor.x, &game->img.floor.y);
	game->img.wall.img = mlx_xpm_file_to_image(game->mlx.ptr, "../imgs/parede48x40.xpm", &game->img.wall.x, &game->img.wall.y);

	ft_print_window(game);
}
