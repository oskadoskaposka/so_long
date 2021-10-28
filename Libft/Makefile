# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 01:47:09 by apaduan-          #+#    #+#              #
#    Updated: 2021/10/27 23:55:53 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# https://www.embarcados.com.br/introducao-ao-makefile/
 
# Name of the project
NAME=libft.a
 
# .c files
C_SOURCE=src/original/ft_isalnum.c \
         src/original/ft_isalpha.c \
         src/original/ft_isascii.c \
         src/original/ft_isdigit.c \
         src/original/ft_isprint.c \
         src/original/ft_strlcat.c \
         src/original/ft_strlcpy.c \
         src/original/ft_strlen.c \
         src/original/ft_strncmp.c \
         src/original/ft_tolower.c \
         src/original/ft_toupper.c \
		 src/original/ft_strchr.c \
		 src/original/ft_strrchr.c \
		 src/original/ft_strnstr.c \
		 src/original/ft_memcpy.c \
		 src/original/ft_memccpy.c \
		 src/original/ft_memchr.c \
		 src/original/ft_memcmp.c \
		 src/original/ft_memmove.c \
		 src/original/ft_memset.c \
		 src/original/ft_bzero.c \
		 src/personal/ft_isspace.c \
		 src/personal/ft_transform_sign.c \
		 src/original/ft_atoi.c \
		 src/original/ft_calloc.c \
		 src/original/ft_strdup.c \
		 src/original/ft_putchar_fd.c \
		 src/original/ft_putendl_fd.c \
		 src/original/ft_putnbr_fd.c \
		 src/original/ft_putstr_fd.c \
		 src/original/ft_substr.c \
		 src/original/ft_strjoin.c \
		 src/original/ft_strtrim.c \
		 src/original/ft_itoa.c \
		 src/original/ft_strmapi.c \
		 src/original/ft_split.c \
		 src/personal/ft_uitoa.c \
		 src/personal/ft_itoh.c \
		 src/gnl/get_next_line.c \
		 src/printf/ft_print_c.c \
     	 src/printf/ft_print_di.c \
		 src/printf/ft_print_p.c \
		 src/printf/ft_print_s.c \
		 src/printf/ft_print_u.c \
		 src/printf/ft_print_x.c \
		 src/printf/ft_printf.c

# .h files
H_SOURCE=libft.h
 
# Output files
OUT=$(C_SOURCE:.c=.o)
 
# Compiler
CC=clang
 
# Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror

# Compilation and linking

all: $(NAME)

$(NAME): $(OUT)
	@ar rcs  $(NAME) $(OUT)
	@echo "$(GR)Creating $(NAME) project!$(RC)"

%.o: %.c
	@$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	@rm -f $(OUT)
	@echo "$(YE)Removing $(NAME) .o files!$(RC)"

fclean:
	@rm -f $(OUT)
	@rm -f $(NAME)
	@echo "$(RE)Removing $(NAME) .o and .a files!$(RC)"

re: fclean all

#To use this command in terminal write:
# make git m="your message"
git:
	@git add .
	@git commit -m "$m"
	@git push
	@echo "$(PU)Changes send to remote repository!!$(RC)"

.PHONY: git fclean clean re all

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