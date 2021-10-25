/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:13:25 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 21:43:43 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_check_map_values(t_game *game)
{
	int	i;

	i = 0;
	printf("\n");
	printf("O valor de lines é %d \n", game->map.lines);
	printf("O valor de len é %d \n\n", game->map.len);
	while (i < game->map.lines)
	{
		printf("O valor de s[%d] é %s", i, game->map.map[i]);
		i++;
	}
	printf("\n");
}
