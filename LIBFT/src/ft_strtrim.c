/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                              			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static int	ft_isset(char c, const char *set)
{
		while (*set)
		{
			if (c == *set)
				return (1);
			set++;
		}
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*result;

	if (!s1 || !set)
		return ('\0');

	start = 0;
	end = ft_strlen(s1) - 1;

	if (!result)
		return ('\0');
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	while (end >= start && ft_isset(s1[end], set))
		end--;
	result = ft_substr(s1, start, end - start + 1);
	return (result);
}