/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:32:33 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/21 18:42:09 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ************************************************************************** */
/*                              INCLUDE                                       */
/* ************************************************************************** */
# include "../mlx_linux/mlx.h"
# include "../Libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

/* ************************************************************************** */
/*                              STRUCT                                        */
/* ************************************************************************** */
typedef struct s_map
{
	char	**map;
	char	*path_map;
	int		lines;
	int		len;
	int		picks_temp;
	int		picks;
	int		pl_picks;
	int		pl_line;
	int		pl_len;
	int		pl_nm;
}	t_map;

typedef struct s_mlx
{
	void	*ptr;
	void	*ptr_win;
}	t_mlx;

typedef struct s_info
{
	void	*img;
	int		x;
	int		y;
}	t_info;

typedef struct s_img
{
	t_info	floor;
	t_info	wall;
	t_info	player;
	t_info	pickup;
	t_info	gateway;
}	t_img;

typedef struct s_game
{
	t_map	map;
	t_mlx	mlx;
	t_img	img;
	int		moves;
}	t_game;

/* ************************************************************************** */
/*                              	CHECK                                     */
/* ************************************************************************** */
void	ft_sucess(t_game *game);
int		ft_check_extension(t_game *game);
int		ft_check_walls(t_game *game);
int		ft_check_player(t_game *game);
int		ft_check_exit(t_game *game);
int		ft_check_collect(t_game *game);
int		ft_check_rect(t_game *game);
void	ft_free_struct(t_game *game);
int		ft_exit_game(t_game *game);

/* ************************************************************************** */
/*                              	MAP                                       */
/* ************************************************************************** */
void	ft_map_configuration(t_game *game);
int		ft_count_lines(t_game *game);
void	ft_save_map(t_game *game);

/* ************************************************************************** */
/*                              	WINDOW                                    */
/* ************************************************************************** */
void	ft_window_configuration(t_game *game);
void	ft_create_window(t_game *game);
void	ft_config_images(t_game *game);
void	ft_destroy_images(t_game *game);
void	ft_print_window(t_game *game);
void	ft_print_item(t_game *game, char c, int i, int j);
void	ft_save_state(t_game *game);
int		ft_expose(t_game *game);

/* ************************************************************************** */
/*                              	MOVIMENT                                  */
/* ************************************************************************** */
int		ft_input(int key, t_game *game);
void	ft_player_move_right(t_game *game);
void	ft_player_move_left(t_game *game);
void	ft_player_move_len(t_game *game);
void	ft_player_move_up(t_game *game);
void	ft_player_move_down(t_game *game);
void	ft_player_move_line(t_game *game);
void	ft_next(t_game *game);

/* ************************************************************************** */
/*                              	OTHER                                     */
/* ************************************************************************** */
void	ft_check_map_values(t_game *game);
void	ft_check_window_values(t_game *game);
void	ft_check_rules(t_game *game);

#endif