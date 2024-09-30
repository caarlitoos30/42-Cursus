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

// int main()
// {
//     int result = ft_strncmp("abcdef", "abc\375xx", 5);   
//     if (result == 0)
//         ft_putstr_fd("Equal\n", 1);
//     else if (result < 0)
//         ft_putstr_fd("First string is shorter\n", 1);
//     else
//         ft_putstr_fd("First string is bigger\n", 1);
//     return 0;
// }
