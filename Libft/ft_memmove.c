/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:50:58 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/30 18:45:18 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char src[] = "Hola";
//     char dest[5];  

//     ft_memmove(dest, src, 5);  

//     printf("src: %s\n", src);
//     printf("dest: %s\n", dest);

//     return 0;
// }