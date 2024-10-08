/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/07/18 16:39:44 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 15:58:39 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
