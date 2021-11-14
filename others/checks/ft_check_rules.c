/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rules.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:16:13 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 16:43:32 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

void	ft_check_rules(t_game *game)
{
	ft_printf("O valor de ft_check_extension é: %i\n", ft_check_extension(game));
	ft_printf("O valor de ft_check_walls é: %i \n", ft_check_walls(game));
	ft_printf("O valor de ft_check_player é: %i \n", ft_check_player(game));
	ft_printf("O valor de ft_check_exit é: %i \n", ft_check_exit(game));
	ft_printf("O valor de ft_check_collect é: %i \n", ft_check_collect(game));
}
