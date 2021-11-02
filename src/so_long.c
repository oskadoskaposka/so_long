/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:21:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/02 17:53:31 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	main(void)
{
	t_game	game;

	game.map.path_map = "src/1_map/map.ber";
	ft_map_configuration(&game);
	ft_window_configuration(&game);
	mlx_key_hook(game.mlx.ptr_win, ft_input, &game);
	mlx_loop(game.mlx.ptr);
	return (0);
}
