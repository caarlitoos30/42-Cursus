/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:20:17 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/23 22:56:12 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && (size_t)i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] && i + j < n)
			{
				if (s2[j + 1] == '\0')
					return ((char *)&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     const char *texto = "Hola me llamo carlos alguacil garrido, tengo 17 años,";
//     const char *sbstr = "tengo";
//     char *result;

//     result = ft_strnstr(texto, sbstr, 154);

//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found.\n");

//     return 0;
// }