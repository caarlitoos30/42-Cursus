/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:07:43 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/22 03:33:06 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, size_t i)

{
	while ((*str != '\0') && (*str != (char)i))
		str++;
	if (*str == (char)i)
		return ((char *)str);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%s\n", ft_strchr("Hola, undo!", 'm'));
//     return 0;
// }
