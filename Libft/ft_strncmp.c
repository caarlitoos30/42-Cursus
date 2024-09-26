/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:05:46 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/18 18:05:46 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		i++;
	}
	return (0);
}
//  #include <stdio.h>

// int main()
// {
//     char str1[] = "abcdef";
//     char str2[] = "abc\375xx";
//     unsigned int n = 5;
//     int result;

//     result = ft_strncmp(str1, str2, n);

//     if (result == 0)
//         printf("The strings are equal up to the first %u characters.\n", n);
//     else if (result < 0)
//         printf("First string is shorter to the first %u characters.\n", n);
//     else
//         printf("The first string is biggerto the first %u characters.\n", n);

//     return 0;
// }
