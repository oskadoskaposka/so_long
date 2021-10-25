/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:12:51 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 23:31:03 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_print_window(t_game *game)
{
 	int		i;
	int		j;

	i = 0;
	j = 0;
 	while (j < game->map.lines)
	{
		while (i < game->map.len)
		{
			mlx_put_image_to_window(game->mlx.ptr, game->mlx.ptr_win, game->img.floor.img, (i * 50), (j * 50));
			i++;
		}
		i = 0;
		j++;
	}
}
