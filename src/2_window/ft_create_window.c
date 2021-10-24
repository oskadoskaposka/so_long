/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:28:40 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:11:11 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_create_window(void)
{
	t_map	map;
	t_mlx	mlx;

	mlx.ptr = mlx_init();
	//definir uma variavel com o tamanho padrao das imagens no lugar desse 50
	mlx.ptr_win = mlx_new_window(mlx.ptr, (map.len * 50), (map.lines * 50),"so_long");

	ft_config_images();
	//ft_print_window();
	
	//mlx_loop(mlx.ptr);
}
