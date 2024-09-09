/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:53:05 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/17 12:55:01 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	
	i = 0;
	if (!c)
		return (0);
	while (i < n && s)
	{	
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}