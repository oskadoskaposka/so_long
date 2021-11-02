/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:28:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/02 15:02:08 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_create_window(t_game *game)
{
	game->mlx.ptr = mlx_init();
	game->mlx.ptr_win = mlx_new_window(game->mlx.ptr, (game->map.len * 50), \
	(game->map.lines * 50), "so_long");

}

void	ft_window_configuration(t_game *game)
{
	ft_create_window(game);
	ft_config_images(game);
	ft_print_window(game);
	ft_check_window_values(game);
	mlx_loop(game->mlx.ptr);
}
