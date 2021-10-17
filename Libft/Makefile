# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 01:47:09 by apaduan-          #+#    #+#              #
#    Updated: 2021/10/16 23:09:06 by apaduan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# https://www.embarcados.com.br/introducao-ao-makefile/
 
# Name of the project
NAME=libft.a
 
# .c files
C_SOURCE=ft_isalnum.c \
         ft_isalpha.c \
         ft_isascii.c \
         ft_isdigit.c \
         ft_isprint.c \
         ft_strlcat.c \
         ft_strlcpy.c \
         ft_strlen.c \
         ft_strncmp.c \
         ft_tolower.c \
         ft_toupper.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strnstr.c \
		 ft_memcpy.c \
		 ft_memccpy.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_memmove.c \
		 ft_memset.c \
		 ft_bzero.c \
		 ft_isspace.c \
		 ft_transform_sign.c \
		 ft_atoi.c \
		 ft_calloc.c \
		 ft_strdup.c \
		 ft_putchar_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
		 ft_putstr_fd.c \
		 ft_substr.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 ft_itoa.c \
		 ft_strmapi.c \
		 ft_split.c \
		 ft_uitoa.c \
		 ft_itoh.c \
		 get_next_line.c
 
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

$(NAME):$(OUT)
	@ar rcs  $(NAME) $(OUT)
#	@echo "Creating $(NAME)"

$(OUT): $(C_SOURCE) $(H_SOURCE)
	@$(CC) $(CC_FLAGS) -c $(C_SOURCE)
#	@echo "Creating $(OUT)"

clean:
	@rm -f $(OUT)
#	@echo "Removing $(OUT)"

fclean:
	@rm -f $(OUT)
#	@echo "Removing $(OUT)"
	@rm -f $(NAME)
#	@echo "Removing $(NAME)"

re: fclean all

#To use this command in terminal write:
# make git m="your message"
git:
	@git add .
	@git commit -m "$m"
	@git push

.PHONY: git fclean clean re all