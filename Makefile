# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 17:33:44 by apaduan-          #+#    #+#              #
#    Updated: 2021/09/16 17:37:02 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Name of the project
NAME=so_long
 
# Files of Printf
# .c files
C_SOURCE=ft_printf.c \
		 ft_print_c.c \
		 ft_print_s.c \
		 ft_print_di.c \
		 ft_print_u.c \
		 ft_print_x.c \
		 ft_print_p.c
 
# .h files
H_SOURCE=ft_printf.h
 
# Output files
OUT=$(C_SOURCE:.c=.o)
 
#Libft Path
LIBFT_PATH = Libft/

#Libft name
LIBFT = $(LIBFT_PATH)libft.a

# Compiler
CC=clang
 
# Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror

# Compilation and linking
all: $(NAME)

# This rule, compiles LibftPrintf.a
$(NAME): $(LIBFT) $(OUT)
	@rm -f $(NAME)
	@cp $(LIBFT) $(NAME)
	@ar rcs  $(NAME) $(OUT)
	@echo "Creating $(NAME)"

$(LIBFT):
	@cd $(LIBFT_PATH); make

# 
$(OUT): $(C_SOURCE) $(H_SOURCE)
	@$(CC) $(CC_FLAGS) -c $(C_SOURCE)
	@echo "Creating $(OUT)"

# Enters Libft_path and removes only *.o files
# Then remove *.o files from root directory
clean:
	@cd $(LIBFT_PATH); make clean
	@rm -f $(OUT)
	@echo "Removing $(OUT)"

# Enters Libft_path and removes *.o and *.a files 
# Then remove *.o and *.a files from root directory
fclean:
	@cd $(LIBFT_PATH); make fclean
	@rm -f $(OUT)
	@echo "Removing $(OUT)"
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

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

# Compiles with main.c and exec *.c, then removes the .o
test: rec
	@echo ''
	@echo ''
	@echo 'Testing $(NAME)'
	@echo ''
	@$(CC) main.c $(NAME) && ./a.out
	@rm a.out

testm: rec
	@echo ''
	@echo ''
	@echo 'Testing $(NAME)'
	@echo ''
	@$(CC) main_mochida.c $(NAME) && ./a.out
	@rm a.out

.PHONY: 