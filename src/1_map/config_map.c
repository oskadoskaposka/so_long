/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:43:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 14:33:27 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_map_configuration(t_game *game)
{
	ft_count_lines(game);
	ft_save_map(game);
}
