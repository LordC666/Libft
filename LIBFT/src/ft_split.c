/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/28 23:01:36 by cnieto           ###   ########.fr       */
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

static char	*ft_alloc_word(const char *s)
{
	int		len;
	char	*word;

	len = 0;
	word = (char *)malloc(len + 1);
	if (!word)
		return ('\0');
	while (s[len] && s[len] != '\0')
		len++;
	word[len] = '\0';
	while (len >= 0)
	{
		word[len] = s[len];
		len--;
	}
	return (word);
}

static void	ft_free_split(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

static char	**ft_split_process(const char *s, char c, char **split)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = ft_alloc_word(s);
			if (!split[i])
			{
				ft_free_split(split, i);
				return ('\0');
			}
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return ('\0');
	return (ft_split_process(s, c, split));
}
