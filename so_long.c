/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:32:37 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/06 21:02:57 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/so_long.h"

//apagar
#include <stdio.h>

int main (void)
{
	void	*mlx;
	void	*mlx_win;
	
	int 	wall_x;
	int		wall_y;
	
	void	*print_wall;
	void	*chao;
	
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx,250,50,"Hello World!");

	print_wall = mlx_xpm_file_to_image(mlx, "imgs/parede.xpm", &wall_x, &wall_y);
	chao = mlx_xpm_file_to_image(mlx, "imgs/teste.xpm", &wall_x, &wall_y);
	
	mlx_put_image_to_window(mlx, mlx_win,chao, 0, 0);
	mlx_put_image_to_window(mlx, mlx_win,chao, 50, 0);
	mlx_put_image_to_window(mlx, mlx_win,chao, 100, 0);
	mlx_put_image_to_window(mlx, mlx_win,chao, 150, 0);
	mlx_put_image_to_window(mlx, mlx_win,chao, 200, 0);
	
	mlx_put_image_to_window(mlx, mlx_win,print_wall, 10, 2);
	mlx_put_image_to_window(mlx, mlx_win,print_wall, 60, 2);
	mlx_put_image_to_window(mlx, mlx_win,print_wall, 110, 2);
	mlx_put_image_to_window(mlx, mlx_win,print_wall, 160, 2);
	mlx_put_image_to_window(mlx, mlx_win,print_wall, 210, 2);

	printf("O tamanho de x é %d \n", wall_x);
	printf("O tamanho de y é %d \n", wall_y);

	mlx_loop(mlx);

	return (0);
}
