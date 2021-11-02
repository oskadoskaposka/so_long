/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_moves_lines.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:26:36 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/02 18:54:31 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_player_move_line(t_game *game)
{	
	if (game->map.map[game->map.pl_nm][game->map.pl_len] == '0')
	{
		game->map.map[game->map.pl_line][game->map.pl_len] = '0';
		game->map.map[game->map.pl_nm][game->map.pl_len] = 'P';
	}
	if (game->map.map[game->map.pl_nm][game->map.pl_len] == 'C')
	{
		game->map.map[game->map.pl_line][game->map.pl_len] = '0';
		game->map.map[game->map.pl_nm][game->map.pl_len] = 'P';
		game->map.pl_picks += 1;
	}
	if (game->map.map[game->map.pl_nm][game->map.pl_len] == 'E')
		if (game->map.picks == game->map.pl_picks)
			ft_printf("GAME OVER");
}

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
