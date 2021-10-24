/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:28:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 02:00:59 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_create_window(void)
{
	t_mlx	mlx;
	t_map	map;
	int		x;
	int 	y;

	x = map.len * 50;
	y = map.lines * 50;
	mlx.ptr = mlx_init();
	mlx.ptr_win = mlx_new_window(mlx.ptr, x, y, "SO_LONG");

	mlx_loop(mlx.ptr);
}
