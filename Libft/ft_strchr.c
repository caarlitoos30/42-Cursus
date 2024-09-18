/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:07:43 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/18 20:21:29 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int i)

{
	while ((*str != '\0') && (*str != (char)i))
		str++;
	if (*str == (char)i)
		return ((char *)str);
	return (NULL);
}

#include <stdio.h>
int main(void)
{
    printf("%s\n", ft_strchr("Hola, mundo!", 'm'));
    return 0;
}
