/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_window_values.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:59:37 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/02 16:49:08 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_check_window_values(t_game *game)
{
	ft_printf("\nO total de muedinhas é: %i \n", game->map.picks);
	ft_printf("\nO player está na linha [%i] e na coluna [%i] \n", game->map.pl_line, game->map.pl_len);
}
