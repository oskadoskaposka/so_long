/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horizontal_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:44:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/21 18:48:33 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_player_move_right(t_game *game)
{
	game->map.pl_nm = game->map.pl_len + 1;
	ft_player_move_len(game);
}

void	ft_player_move_left(t_game *game)
{
	game->map.pl_nm = game->map.pl_len - 1;
	ft_player_move_len(game);
}

void	ft_player_move_len(t_game *game)
{	
	if (game->map.map[game->map.pl_line][game->map.pl_nm] == '0')
	{
		game->map.map[game->map.pl_line][game->map.pl_len] = '0';
		game->map.map[game->map.pl_line][game->map.pl_nm] = 'P';
		ft_next(game);
	}
	if (game->map.map[game->map.pl_line][game->map.pl_nm] == 'C')
	{
		game->map.map[game->map.pl_line][game->map.pl_len] = '0';
		game->map.map[game->map.pl_line][game->map.pl_nm] = 'P';
		game->map.pl_picks += 1;
		ft_printf("Item Collected!!!        ");
		ft_next(game);
	}
	if (game->map.map[game->map.pl_line][game->map.pl_nm] == 'E')
		if (game->map.picks == game->map.pl_picks)
			ft_exit_game(game);
}
