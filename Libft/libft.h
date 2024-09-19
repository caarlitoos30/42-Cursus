/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:42:30 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/19 21:54:59 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char *str);
int	ft_toupper(int c);
int	ft_tolower(int i);
int	ft_isprint(int i);
int	ft_isdigit(int i);
int	ft_isascii(int i);
int	ft_isalpha(int i);
int	ft_isalnum(int i);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);


#endif