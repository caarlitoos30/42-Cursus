/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:25:06 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/26 19:38:16 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*copy;

	len = ft_strlen(s1);
	copy = malloc(++len);
	if (copy == 0)
		return (0);
	while (--len >= 0)
		copy[len] = s1[len];
	return (copy);
}
