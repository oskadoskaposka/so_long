/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:12:51 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 04:15:46 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_print_window(void)
{
	t_map	map;
	t_mlx	mlx;
	t_img	img;
	int		i;
	int		j;
	int		x;
	int		y;

	i = 0;
	j = 0;

	img.floor.img = mlx_xpm_file_to_image(mlx.ptr, "imgs/chao50x50.xpm", &x, &y);
	img.wall.img = mlx_xpm_file_to_image(mlx.ptr, "imgs/parede48x40.xpm", &x, &y);

	while(j < map.lines)
	{
		while (i < map.len)
		{
			mlx_put_image_to_window(mlx.ptr, mlx.ptr_win, img.floor.img, (i * 50), (j * 50));
			printf("i + 1");
			i++;
		}
		i = 0;
		j++;
		printf("j + 1");
	}



}