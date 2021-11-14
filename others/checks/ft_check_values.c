/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:13:25 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 13:40:42 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_check_map_values(t_game *game)
{
	int	i;

	i = 0;
	ft_printf("\n");
	ft_printf("O valor de lines é %d \n", game->map.lines);
	ft_printf("O valor de len é %d \n\n", game->map.len);
	while (i < game->map.lines)
	{
		ft_printf("O valor de s[%d] é %s", i, game->map.map[i]);
		i++;
	}
	ft_printf("\n");
}
