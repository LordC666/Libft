/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                              			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static int	ft_count_words(const char *s, char c)
{
	int count;
	int in_word;

    count = 0;
    in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	ft_alloc_word(const char *s, char c)
{
	int len;
    char *word;

    len = 0;
    while (s[len] && s[len] != c);
        len++;    
    word = (char *)malloc(len + 1);
    if (!word)
        return ('\0');
    word[len] = '\0';
    while (len)
    {
        word[len] = s[len];
        len--;
    }
    return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;

    i = 0;
    split = '\0';
	if (s && (split = malloc((ft_count_words(s, c) + 1) * sizeof(char *))))
	{
        while (*s)
	    {
		    if (*s != c)
		    {
			    if (!(split[i++] = ft_alloc_word(s, c)))
			{
				return ('\0');
			}
			while (*s && *s != c)
				s++;
		    }
            else
                s++;      
        }
        split[i] = '\0';    
	}
    return (split);
}