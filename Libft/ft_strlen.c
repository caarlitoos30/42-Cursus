/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:55:35 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/21 16:31:53 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Longitud: %d\n", ft_strlen("Hola, mundo!"));
// 	return (0);
// }
