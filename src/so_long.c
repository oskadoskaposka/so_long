/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:21:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 14:24:22 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		game.map.path_map = argv[1];
		ft_sucess(&game);
	}
	else
		ft_printf("\nError \nMissing map file!\n\n");
	return (0);
}

void	ft_sucess(t_game *game)
{
	if (ft_check_extension(game))
	{
		ft_map_configuration(game);
		ft_window_configuration(game);
	}
	else
		ft_printf("\nError \nWrong map extension!\n\n");
}
