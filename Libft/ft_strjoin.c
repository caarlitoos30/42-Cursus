/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:25:08 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/27 23:01:46 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str_len;
	size_t	i;

	str_len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = (char *)malloc(sizeof(char) * str_len);
	if (!s1 || !s2 || !str)
		return (0);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = 0;
	return (str);
}
