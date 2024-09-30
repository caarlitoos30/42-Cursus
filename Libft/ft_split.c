/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:04:27 by calguaci          #+#    #+#             */
/*   Updated: 2024/09/30 19:42:49 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ntokens(const char *s, char c)
{
	size_t	tok;

	tok = 0;
	while (*s)
	{
		if (*s != c)
		{
			++tok;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (tok);
}

char	**ft_split(const char *s, char c)
{
	char	**tok;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	tok = malloc(sizeof(char *) * (ft_ntokens(s, c) + 1));
	if (!tok)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			tok[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	tok[i] = 0;
	return (tok);
}

// int main(void)
// {
//     char **result = ft_split("Hola mundo me llamo carlos", ' ');
//     printf("%s\n", result[0]);
//     printf("%s\n", result[1]);
// 	printf("%s\n", result[2]);
// 	printf("%s\n", result[3]);
// 	printf("%s\n", result[4]);
//     return 0;
// }
