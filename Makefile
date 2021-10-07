# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 17:33:44 by apaduan-          #+#    #+#              #
#    Updated: 2021/10/06 14:42:30 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
NAME=so_long

# Paths
## mlx path
PATH_MLX=mlx_linux/
## headers path
PATH_HEADER=headers/

# Files 
## .c files
C_SOURCE=so_long.c
## .h files
H_SOURCE=$(PATH_HEADER)so_long.h
## Output files
OUT=$(C_SOURCE:.c=.o)
## mlx
MLX=$(PATH_MLX)libmlx.a

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
$(NAME): $(MLX) $(OUT)
	@$(CC) $(CC_FLAGS) $(C_SOURCE) $(MLX) $(MLX_FLAGS) -o $(NAME)

$(OUT): $(C_SOURCE) $(H_SOURCE)
	@$(CC) -c $(C_SOURCE) -I $(PATH_HEADER)

$(MLX):
	@cd mlx_linux; make

clean:
	@rm -f $(OUT)
	@echo "Removing $(OUT)"

fclean:
	@rm -f $(OUT)
	@echo "Removing $(OUT)"
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

r: all
	./so_long

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