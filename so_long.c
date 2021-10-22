/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:21:54 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/21 23:39:59 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/so_long.h"

int	main(void)
{
	int		i;
	char	*s;
	int		fd;
	// t_map	map;
	char **map;

	char *path_map;


	i = 0;
	s = "teste";
	fd = open("src/map.ber", O_RDONLY);
 	map = malloc((5) * sizeof(char *));

	path_map = "src/map.ber";

	count_lines(path_map);

	while (s)
	{
		s = get_next_line(fd);
		if (s)
		{
			printf("%s", s);
			map[i] = ft_strdup(s); 
		}
		i++;
	}
	printf ("\n\n%i \n", i);
	return (0);
}