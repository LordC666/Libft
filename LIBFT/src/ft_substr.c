/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substring.c                            			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t len_max;
	char *result;

	i = 0;
	if (!s || start > ft_strlen(s))
	{
		result = (char *)malloc(1);
        if (result)
            result[0] = '\0';
        return result;
	}
	
	len_max = ft_strlen(s) - start;
	if (len > len_max)
		len = len_max;
	
	result = (char *)malloc(sizeof(*s) * (len + 1));
	if (!result)
		return;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}

	result[i] = '\0';
	return (result);
}