# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 17:33:44 by apaduan-          #+#    #+#              #
#    Updated: 2021/11/02 18:33:04 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME=so_long

# Paths
## mlx path
PATH_MLX=mlx_linux/
## headers path
PATH_HEADER=headers/
## libft path
PATH_LIBFT=Libft/

# Files 
## .c files
C_SOURCE=src/so_long.c \
         src/1_map/ft_map_read.c \
		 src/1_map/ft_check_values.c \
		 src/2_window/ft_create_window.c \
		 src/2_window/ft_print_window.c \
		 src/2_window/ft_config_images.c \
		 src/2_window/ft_check_window_values.c \
		 src/3_moviments/ft_player_moves_len.c \
		 src/3_moviments/ft_player_moves_lines.c \
		 src/3_moviments/ft_input.c
## example
E_SOURCE=others/so_long_example.c
## .h files
H_SOURCE=$(PATH_HEADER)so_long.h
## Output files
OUT=$(C_SOURCE:.c=.o)
## mlx
MLX=$(PATH_MLX)libmlx.a
## libft
LIBFT=$(PATH_LIBFT)libft.a

# Compiler
CC=clang
# Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror
# Flags mlx
MLX_FLAGS=-L. -lXext -L. -lX11

############################  RULES

# Compilation and linking
all: $(NAME)

# This rule compiles 
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

r: fclean all
	@./so_long

e:	fclean all
	@$(CC) $(CC_FLAGS) $(E_SOURCE) $(MLX) $(LIBFT) $(MLX_FLAGS) -o $(NAME)
	@./so_long

# Cleans all files and redo the compilation
re: fclean all

# Cleans all files, redo the compilation and cleans .o
rec: fclean all clean

# To use this command in terminal write:
# make git m="your message"
git:
	@git add .
	@git commit -m "$m"
	@git push
	@echo "$(PU)Changes send to remote repository!!$(RC)"
	
.PHONY: 

# Collors discovered by makefile of cado-car, works similar to bash collors
# so, to use add in bash commands like the example line bellow, remember
# always remove the collors in end of line, or terminal will be collored
#	@echo "$(RE)Removing $(OUT) $(RC)"

# Colors
BA  = \033[0;30m
RE	= \033[0;31m
GR	= \033[0;32m
YE	= \033[0;33m
BL  = \033[0;34m
PU  = \033[0;35m
CY	= \033[0;36m
WH  = \033[0;37m
RC	= \033[0m