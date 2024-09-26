/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/26 15:18:54 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

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

static char	*ft_alloc_word(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
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
	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return ('\0');
	while (*s)
	{
		if (*s != c)
		{
			split[i] = ft_alloc_word(s, c);
			if (!split[i++])
			{
				while (i > 0)
					free(split[--i]);
				return (free(split), '\0');
			}
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (split[i] = '\0', split);
}
