/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:44:02 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/25 19:33:27 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, size * count);
	return (result);
}
// #include <stdio.h>
// int main() 

// {
//     int *arr = (int *)ft_calloc(-15, sizeof(int));

//     if (!arr) {
//         printf("Error al asignar memoria\n");
//         return 1;
//     }

//     printf("Primer valor: %d\n", arr[0]);

//     free(arr); 
//     return 0;
// }