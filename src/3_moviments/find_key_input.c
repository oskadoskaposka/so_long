/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_key_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:24:07 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 16:57:22 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_input(int key, t_game *game)
{
	if (key == 'd')
		ft_player_move_right(game);
	else if (key == 'a')
		ft_player_move_left(game);
	else if (key == 'w')
		ft_player_move_up(game);
	else if (key == 's')
		ft_player_move_down(game);
	else if (key == 65307)
		ft_exit_game(game);
	mlx_clear_window(game->mlx.ptr, game->mlx.ptr_win);
	game->moves += 1;
	ft_printf("Total moves: %i\n", game->moves);
	ft_print_window(game);
	return (0);
}
