/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:00:35 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 18:18:13 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_free_struct(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map[i])
	{
		free(game->map.map[i]);
		i++;
	}
	free(game->map.map);
}

int	ft_exit_game(t_game *game)
{
	ft_free_struct(game);
	mlx_destroy_window(game->mlx.ptr, game->mlx.ptr_win);
	mlx_destroy_display(game->mlx.ptr);
	free(game->mlx.ptr);
	exit(0);
	return (0);
}
