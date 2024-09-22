/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:42:30 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/22 22:09:20 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t			ft_strlen(char *str);
int				ft_toupper(int c);
int				ft_tolower(int i);
int				ft_isprint(int i);
int				ft_isdigit(int i);
int				ft_isascii(int i);
void			*ft_memset(void *b, int c, size_t len);
int				ft_isalpha(int i);
int				ft_isalnum(int i);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			ft_bzero(void *str, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
char			*ft_strchr(const char *str, size_t i);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strrchr(const char *s, int c);
int		        ft_memcmp(const void *s1, const void *s2, size_t n);

#endif