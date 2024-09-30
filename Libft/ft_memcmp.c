/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:06:44 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/30 18:42:32 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return ((*((unsigned char *)s1 + i)) - *((unsigned char *)s2 + i));
	}
	return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_memcmp("Hola", "Holb", 4));
//     return 0;
// }