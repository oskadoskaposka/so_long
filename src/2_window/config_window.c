/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:51:24 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 18:42:01 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_window_configuration(t_game *game)
{
	ft_create_window(game);
	ft_print_window(game);
	ft_save_state(game);
	mlx_key_hook(game->mlx.ptr_win, ft_input, game);
	mlx_hook(game->mlx.ptr_win, 17, 1L << 0, ft_exit_game, game);
	mlx_loop(game->mlx.ptr);
}
