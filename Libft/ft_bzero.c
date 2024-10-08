/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:43:33 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/19 18:43:33 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, '\0', len);
}

// int main(void)
// {
//     char str[20] = "Hola Mundo";
//     ft_bzero(str, 5);
//     printf("%s\n", str); // Imprime la cadena resultante
//     return 0;
// }