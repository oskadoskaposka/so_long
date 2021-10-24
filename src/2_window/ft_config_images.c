/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:25:00 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 18:55:47 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_config_images(void)
{
	t_img	img;
	t_mlx	mlx;
	void 	*teste;
	
	teste = mlx_xpm_file_to_image(mlx.ptr,"imgs/chao50x50.xpm", &img.floor.x, &img.floor.y);
	
//	img.floor.img = mlx_xpm_file_to_image(mlx.ptr, "../imgs/chao50x50.xpm", &img.floor.x, &img.floor.y);
//	img.wall.img = mlx_xpm_file_to_image(mlx.ptr, "../imgs/parede48x40.xpm", &img.wall.x, &img.wall.y);

	int		i;
	int		j;

	i = 0;
	j = 0;

	//mlx_put_image_to_window(mlx.ptr, mlx.ptr_win, teste, 0, 0);

}
