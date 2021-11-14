/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:00:35 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 12:32:39 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_exit_game(t_game *game)
{
	mlx_destroy_window(game->mlx.ptr, game->mlx.ptr_win);
	mlx_destroy_display(game->mlx.ptr);
	exit(0);
	return (0);
}
