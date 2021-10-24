/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:13:25 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:49:15 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_check_map_values(t_config *config)
{
	int	i;

	i = 0;
	printf("\n");
	printf("O valor de lines é %d \n", config->map->lines);
	printf("O valor de len é %d \n\n", config->map->len);
	while (i < config->map->lines)
	{
		printf("O valor de s[%d] é %s", i, config->map->map[i]);
		i++;
	}
	printf("\n");
}
