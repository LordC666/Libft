/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                              			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	i;
	void *ptr;

	i = number * size;
	ptr = malloc(i);
	if (!ptr)
		return (0);
	
	ft_memset(ptr, 0, i);
	
	return ptr;
}