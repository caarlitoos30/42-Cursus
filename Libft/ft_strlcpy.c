/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:48:11 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/30 20:08:07 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)

{
	unsigned int (i);
	i = 0;
	if (!(size == 0))
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
//     char dest[20];
//     unsigned int length = ft_strlcpy(dest, "Pruebas, perrete", sizeof(dest));

//     printf("Cadena copiada: %s\n", dest);
//     printf("Longitud: %u\n", length);

//     return (0);
// }