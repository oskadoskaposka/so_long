/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:22:55 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/21 04:42:17 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/so_long.h"

int	ft_count_lines(t_game *game)
{
	int		i;
	int		fd;
	char	*s;

	i = 0;
	fd = open(game->map.path_map, O_RDONLY);
	ft_printf("O valor de fd é: %i\n", fd);
	if (fd == -1)
		ft_exit_game(game);
	s = get_next_line(fd);
	while (s)
	{
		game->map.len = ft_strlen(s);
		free (s);
		s = 0;
		s = get_next_line(fd);
		i++;
	}
	free (s);
	s = 0;
	close(fd);
	game->map.lines = i;
	return (i);
}

void	ft_save_map(t_game *game)
{
	int		i;
	int		fd;
	char	*str;

	i = 0;
	fd = open(game->map.path_map, O_RDONLY);
	game->map.map = calloc(sizeof(char *),(game->map.len) * (game->map.lines));
	while (i < game->map.lines)
	{
		str = get_next_line(fd);
		game->map.map[i] = ft_strdup(str);
		free(str);
		str = 0;
		i++;
	}
	free (str);
	str = 0;
}
