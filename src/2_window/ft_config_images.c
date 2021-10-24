/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config_images.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:25:00 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:55:50 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_config_images(t_config *config)
{
	config->img->floor.img = mlx_xpm_file_to_image(config->mlx->ptr, "../imgs/chao50x50.xpm", &config->img->floor.x, &config->img->floor.y);
	config->img->wall.img = mlx_xpm_file_to_image(config->mlx->ptr, "../imgs/parede48x40.xpm", &config->img->wall.x, &config->img->wall.y);

	ft_print_window(config);
}
