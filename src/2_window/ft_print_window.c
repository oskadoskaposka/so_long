/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:12:51 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/25 21:08:10 by apaduan-         ###   ########.fr       */
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
			i++;
		}
		i = 0;
		j++;		
	}
	mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
			game->img.gateway.img, 400, 150);

	mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
			game->img.pickup.img,  300, 150);

	mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
			game->img.player.img,  200, 150);

	mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, \
			game->img.wall.img,  10, 150);
}
