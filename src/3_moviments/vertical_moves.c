/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertical_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:26:36 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/21 18:48:45 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_player_move_up(t_game *game)
{
	game->map.pl_nm = game->map.pl_line - 1;
	ft_player_move_line(game);
}

void	ft_player_move_down(t_game *game)
{
	game->map.pl_nm = game->map.pl_line + 1;
	ft_player_move_line(game);
}

void	ft_player_move_line(t_game *game)
{	
	if (game->map.map[game->map.pl_nm][game->map.pl_len] == '0')
	{
		game->map.map[game->map.pl_line][game->map.pl_len] = '0';
		game->map.map[game->map.pl_nm][game->map.pl_len] = 'P';
		ft_next(game);
	}
	if (game->map.map[game->map.pl_nm][game->map.pl_len] == 'C')
	{
		game->map.map[game->map.pl_line][game->map.pl_len] = '0';
		game->map.map[game->map.pl_nm][game->map.pl_len] = 'P';
		game->map.pl_picks += 1;
		ft_printf("Item Collected!!!        ");
		ft_next(game);
	}
	if (game->map.map[game->map.pl_nm][game->map.pl_len] == 'E')
		if (game->map.picks == game->map.pl_picks)
			ft_exit_game(game);
}
