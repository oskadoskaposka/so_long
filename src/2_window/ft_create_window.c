/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:28:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:52:16 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_create_window(t_config *config)
{
	config->mlx->ptr = mlx_init();
	config->mlx->ptr_win = mlx_new_window(config->mlx->ptr, (config->map->len * 50), (config->map->lines * 50),"so_long");

	ft_config_images(config);
	
	mlx_loop(config->mlx->ptr);
}
