/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:32:33 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 19:56:25 by apaduan-         ###   ########.fr       */
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
typedef struct s_map_config
{
	char	**map;
	char	*path_map;
	int		lines;
	int		len;
}	t_map;

typedef struct s_mlx_config
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
}	t_img;

typedef struct s_so_long
{
	t_map	*map;
	t_mlx	*mlx;
	t_img	*img;
}	t_config;

/* ************************************************************************** */
/*                              MAP FUNCTION                                  */
/* ************************************************************************** */
int		ft_count_lines(t_config *config);
void	ft_save_map(t_config *config);
void	ft_check_map_values(t_config *config);
void	ft_map_configuration(t_config *config);

/* ************************************************************************** */
/*                              WINDOW FUNCTION                               */
/* ************************************************************************** */
void	ft_create_window(t_config *config);
void	ft_config_images(t_config *config);
void	ft_print_window(t_config *config);

#endif