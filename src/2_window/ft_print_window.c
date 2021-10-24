/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:12:51 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 18:14:40 by apaduan-         ###   ########.fr       */
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

	i = 0;
	j = 0;
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
