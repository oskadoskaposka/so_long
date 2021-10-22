/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:21:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/21 23:44:28 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/so_long.h"

int	main(void)
{
	int		i;
	char	*s;
	t_map	map;


	i = 0;
	s = "teste";
	map.path_map = "src/map.ber";

	count_lines(map.path_map);

	// while (s)
	// {
	// 	s = get_next_line(fd);
	// 	if (s)
	// 		printf("%s", s);
	// 	i++;
	// }
	printf ("\n\n%i \n", i);
	return (0);
}