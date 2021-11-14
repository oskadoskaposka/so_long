/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:51:24 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 13:59:55 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_window_configuration(t_game *game)
{
	ft_create_window(game);
	ft_config_images(game);
	ft_print_window(game);
	ft_save_state(game);
	//ft_check_window_values(game);
}
