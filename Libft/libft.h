/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:58:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/09/16 12:35:38 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//test with gitpod.io

#ifndef LIBFT_H
# define LIBFT_H

# define BUFFER_SIZE 42

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

int			ft_strlcat(char *dest, const char *src, unsigned int size);
int			ft_strlcpy(char *dest, const char *src, unsigned int size);
int			ft_strlen(const char *str);
int			ft_strncmp(const char *s1, const char *s2, unsigned int n);

int			ft_tolower(int c);
int			ft_toupper(int c);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *lil, unsigned int len);

void		*ft_memcpy(void *dest, const char *src, unsigned int len);
void		*ft_memccpy(void *dest, const void *src, int c, unsigned int len);
const void	*ft_memchr(const void *b, int c, unsigned int len);
int			ft_memcmp(const void *s1, const void *s2, unsigned int len);

void		*ft_memmove(void *dest, const void *src, unsigned int len);
void		*ft_memset(void *dest,	int c, unsigned int len);

void		ft_bzero(void	*str, unsigned int len);
int			ft_atoi(const char *p);

void		*ft_calloc(unsigned int number, unsigned int bytes);
char		*ft_strdup(const char *str);

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int n, int fd);

char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		**ft_split(char const *s, char c);

char		*get_next_line(int fd);

// my personal functions
int			ft_isspace(char c);
int			ft_transform_sign(int c);
char		*ft_uitoa(unsigned int n);
char		*ft_itoh(unsigned long long n, int letter);

#endif
