/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:12:51 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:57:17 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_print_window(t_config *config)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (config->map->lines == 0)
		return;
 	while (j < config->map->lines)
	{
		while (i < config->map->len)
		{
			mlx_put_image_to_window(config->mlx->ptr, config->mlx->ptr_win, config->img->floor.img, (i * 50), (j * 50));
			printf("i + 1\n");
			i++;
		}
		i = 0;
		j++;
		printf("j + 1\n");
	}
}
