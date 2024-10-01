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

#include "libft.h"

static int  count_words(char const *str, char delimiter)
{
    int     word_count;
    int     in_word;

    word_count = 0;
    in_word = 0;
    if (*str == '\0')
        return (0);
    while (*str != '\0')
    {
        if (*str == delimiter)
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            word_count++;
        }
        str++;
    }
    return (word_count);
}

static int  count_chars(char const *str, char delimiter, int index)
{
    int char_count;

    char_count = 0;
    while (str[index] != delimiter && str[index] != '\0')
    {
        char_count++;
        index++;
    }
    return (char_count);
}

static char **free_memory(char const **result, int idx)
{
    while (idx > 0)
    {
        idx--;
        free((void *)result[idx]);
    }
    free(result);
    return (NULL);
}

static char **fill_array(char const *str, char **result,
                        char delimiter, int word_total)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    while (str[i] != '\0' && j < word_total)
    {
        k = 0;
        while (str[i] == delimiter)
            i++;
        result[j] = (char *)malloc(
                sizeof(char) * (count_chars(str, delimiter, i) + 1)
                );
        if (result[j] == NULL)
            return (free_memory((char const **)result, j));
        while (str[i] != '\0' && str[i] != delimiter)
            result[j][k++] = str[i++];
        result[j][k] = '\0';
        j++;
    }
    result[j] = 0;
    return (result);
}

char    **ft_split(char const *s, char c)
{
    char    **result;
    int     word_count;

    if (s == NULL)
        return (NULL);
    word_count = count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (result == NULL)
        return (NULL);
    return (fill_array(s, result, c, word_count));
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
