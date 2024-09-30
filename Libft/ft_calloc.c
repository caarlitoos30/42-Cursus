/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:44:02 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/30 18:37:47 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}

// int main(void)
// {
//     int *arr = (int *)ft_calloc(5, sizeof(int));
//     printf("%d\n", arr[0]);
//     free(arr); 
//     return 0;
// }
