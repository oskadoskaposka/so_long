# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 17:33:44 by apaduan-          #+#    #+#              #
#    Updated: 2021/10/23 23:49:58 by apaduan-         ###   ########.fr        #
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
         src/map/ft_map_read.c \
		 src/map/ft_check_values.c
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

#$(OUT): $(C_SOURCE) $(H_SOURCE)
#	@$(CC) -c $(C_SOURCE) -I $(PATH_HEADER) -o $@

%.o: %.c
	@$(CC) $(CC_FLAGS) -c $< -o $@

# the flag -s is for not run the message of changing directories
$(MLX):
	@cd mlx_linux; make

$(LIBFT):
	@cd Libft; make

clean:
	@cd Libft; make clean
	@rm -f $(OUT)
	@echo "Removing $(OUT)"

fclean:
	@cd Libft; make fclean
	@rm -f $(OUT)
	@echo "Removing $(OUT)"
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

r: fclean all
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

.PHONY: 

# Collors discovered by makefile of cado-car, works similar to bash collors
# so, to use add in bash commands like the example line bellow, remember
# always remove the collors in end of line, or terminal will be collored
#	@echo "$(RE)Removing $(OUT) $(RC)"

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m