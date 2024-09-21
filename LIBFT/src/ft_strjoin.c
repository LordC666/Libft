/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                              			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
 
 char	*ft_strjoin(char const *s1, char const *s2)
 {
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char *result;

	if (!s1 || !s2)
		return;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	result = malloc(len_s1 + len_s2 + 1);

	if (!result)
		return;
	
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[i - len_s1])
	{
		result[i] = s2[i - len_s1];
		i++;
	}

	result[i] = '\0';

	return (result);
 }