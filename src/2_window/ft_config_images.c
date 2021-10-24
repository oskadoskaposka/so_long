/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:25:00 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 04:14:22 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_config_images(void)
{
	t_img	img;
	t_mlx	mlx;
	int		x;
	int		y;

	img.floor.img = mlx_xpm_file_to_image(mlx.ptr, "imgs/chao50x50.xpm", &x, &y);
	img.wall.img = mlx_xpm_file_to_image(mlx.ptr, "imgs/parede48x40.xpm", &x, &y);
}
