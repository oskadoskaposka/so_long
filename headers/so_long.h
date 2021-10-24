/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:32:33 by apaduan-          #+#    #+#             */
/*   Updated: 2021/10/24 18:02:34 by apaduan-         ###   ########.fr       */
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


/* ************************************************************************** */
/*                              MAP FUNCTION                                  */
/* ************************************************************************** */
int		ft_count_lines(t_map *map);
void	ft_save_map(t_map *map);
void	ft_check_map_values (t_map *map);
void	ft_map_configuration(void);

/* ************************************************************************** */
/*                              WINDOW FUNCTION                               */
/* ************************************************************************** */
void	ft_create_window(void);
void	ft_config_images(void);
void	ft_print_window(void);

#endif