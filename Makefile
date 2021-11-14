# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 17:33:44 by apaduan-          #+#    #+#              #
#    Updated: 2021/11/14 16:19:52 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #
# 									VARIABLES								   #
# **************************************************************************** #

# ----------------------------------PROJECT----------------------------------- #
## project name
NAME=so_long

## .h files
H_SOURCE=$(PATH_HEADER)so_long.h

## Output files
OUT=$(C_SOURCE:.c=.o)

## example
E_SOURCE=others/so_long_example.c

## .c files
C_SOURCE=src/so_long.c \
		 src/0_checks/check_map_1.c \
		 src/0_checks/check_map_2.c \
		 src/0_checks/exit_game.c \
         src/1_map/config_map.c \
         src/1_map/read_map.c \
		 src/2_window/config_window.c \
		 src/2_window/create_window.c \
		 src/2_window/print_window.c \
		 src/3_moviments/find_key_input.c \
		 src/3_moviments/horizontal_moves.c \
		 src/3_moviments/vertical_moves.c \
		 \
		 others/checks/ft_check_values.c \
		 others/checks/ft_check_window_values.c \
		 others/checks/ft_check_rules.c

# ----------------------------------PATHS------------------------------------- #
## mlx path
PATH_MLX=mlx_linux/

## headers path
PATH_HEADER=headers/

## libft path
PATH_LIBFT=Libft/

## mlx
MLX=$(PATH_MLX)libmlx.a

## libft
LIBFT=$(PATH_LIBFT)libft.a

# ----------------------------------FLAGS------------------------------------- #
## Compiler
CC=clang

## Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror
		 
## mlx flags
MLX_FLAGS=-L. -lXext -L. -lX11

# ----------------------------------COLORS------------------------------------ #
## Colors
BA  = \033[0;30m
RE	= \033[0;31m
GR	= \033[0;32m
YE	= \033[0;33m
BL  = \033[0;34m
PU  = \033[0;35m
CY	= \033[0;36m
WH  = \033[0;37m
RC	= \033[0m

# **************************************************************************** #
# 									RULES									   #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(LIBFT) $(MLX)
	@$(CC) $(CC_FLAGS) $(C_SOURCE) $(MLX) $(LIBFT) $(MLX_FLAGS) -o $(NAME)
	@echo "$(GR)Creating $(NAME) project!$(RC)"

%.o: %.c
	@$(CC) $(CC_FLAGS) -c $< -o $@

# the flag -s is for not run the message of changing directories
$(MLX):
	@make -s -C ./mlx_linux

$(LIBFT):
	@make -s -C ./Libft

clean:
	@make clean -s -C ./Libft
	@rm -f $(OUT)
	@echo "$(YE)Removing $(NAME) .o files!$(RC)"

fclean:
	@make fclean -s -C ./Libft
	@rm -f $(OUT)
	@rm -f $(NAME)
	@echo "$(RE)Removing $(NAME) .o and .a files!$(RC)"

e:	fclean all
	@$(CC) $(CC_FLAGS) $(E_SOURCE) $(MLX) $(LIBFT) $(MLX_FLAGS) -o $(NAME)
	@./so_long

re: fclean all

rec: fclean all clean

r1: fclean all
	@./so_long maps/map1.ber

r2: fclean all
	@./so_long maps/map2.ber

r3: fclean all
	@./so_long maps/map3.ber

r4: fclean all
	@./so_long maps/map4.ber

r5: fclean all
	@./so_long maps/map5.ber

r6: fclean all
	@./so_long maps/map6.ber

r7: fclean all
	@./so_long maps/map7.ber

# To use this command in terminal write:
# make git m="your message"
git:
	@git add .
	@git commit -m "$m"
	@git push
	@echo "$(PU)Changes send to remote repository!!$(RC)"

.PHONY: 