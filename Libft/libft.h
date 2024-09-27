/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:42:30 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/27 22:25:51 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

size_t				ft_strlen(const char *str);
int					ft_toupper(int c);
int					ft_tolower(int i);
int					ft_isprint(int i);
int					ft_isdigit(int i);
int					ft_isascii(int i);
void				*ft_memset(void *b, int c, size_t len);
int					ft_isalpha(int i);
int					ft_isalnum(int i);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
unsigned int		ft_strlcpy(char *dest, char *src, size_t size);
size_t				ft_strlcat(char *dest, char *src, size_t size);
void				ft_bzero(void *str, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_strchr(const char *str, size_t i);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strrchr(const char *s, int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_atoi(const char *str);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_putstr_fd(char *s, int fd);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
void				ft_putnbr_fd(int n, int fd);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strjoin(char const *s1, char const *s2);

#endif
