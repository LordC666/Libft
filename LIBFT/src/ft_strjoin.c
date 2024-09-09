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

 char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	sizesrc;

	i = 0;
	sizesrc = ft_strlen(src);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}

char	*t_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
		
	dest[len_dest + i] = '\0';

	return (dest);
}
 
 char	*ft_strjoin(char const *s1, char const *s2)
 {
	int	len_s1;
	int	len_s2;
	char *result;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(len_s1 + len_s2 + 1);

	if (!result)
		return (0);
	
	ft_strcpy(result, s1);

	ft_strcat(result, s2);

	return (result);

 }