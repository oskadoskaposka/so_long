/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:28:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 21:42:10 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_create_window(t_game *game)
{
	game->mlx.ptr = mlx_init();
	game->mlx.ptr_win = mlx_new_window(game->mlx.ptr, (game->map.len * 50), (game->map.lines * 50),"so_long");

	//ft_config_images(game);
	
	//mlx_loop(game->mlx.ptr);
}
