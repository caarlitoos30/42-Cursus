/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:25:05 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/30 20:15:08 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (dest == src || !n)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "";
//     char dest[1];
//     ft_memcpy(dest, src, ft_strlen(src) + 1);  
//     printf("cadena dest: %s\n", dest);
//     return 0;
// }