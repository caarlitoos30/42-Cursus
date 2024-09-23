/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:51:06 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/23 23:03:28 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	val;

	sign = 1;
	val = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	val *= sign;
	return (val);
}

// #include <stdio.h>
// int main() {
//     char str[100];

//     printf("Enter string: ");
//     fgets(str, sizeof(str), stdin);
//     int resultado = ft_atoi(str);
//     printf("the converted entire is: %d\n", resultado);

//     return 0;
// }
