/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:22:14 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/24 20:08:14 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	change_char(unsigned int i, char *c)
// {
// 	(void)i;  
// 	*c = *c + 1; 
// }

// int	main(void)
// {
// 	char str[] = "abcde"; 
// 	printf("Before: %s\n", str);
// 	ft_striteri(str, change_char);  
// 	printf("After: %s\n", str);

// 	return 0;
// }