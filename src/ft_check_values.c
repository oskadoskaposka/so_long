/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:13:25 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/23 23:22:32 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	ft_check_map_values(t_map *map)
{
	int	i;

	i = 0;
	printf("O valor de lines é %d \n", map->lines);
	printf("O valor de len é %d \n", map->len);
	while (i < map->lines)
	{
		printf("O valor de s é %s", map->map[i]);
		i++;
	}
}
