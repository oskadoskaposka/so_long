/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:21:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/22 00:16:27 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/so_long.h"

int	main(void)
{
	t_map	map;
	
	map.path_map = "src/map.ber";

	count_lines(&map);

	printf("\n o valor de i é %i\n ------------------------------------- \n", map.lines);


	return (0);
}