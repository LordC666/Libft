/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                              			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	get_num_length(int n)
{
	int length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	len;
	
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	
	len = get_num_length(n);
	res = ft_calloc((len + 1), sizeof(char));
	if (n == 0)
		return ('\0');
	res[len] = 0;

	if (n >= 0)
		n = n * -1;
	else 
		res[0] = '-';
	while ((len > 0 && res[0] == 0) || (len > 1 && res[0] == '-'))
	{
		res[len - 1] = ((n % 10) * -1 + '0');
		n /= 10;
		len--;
	}
	return (res);	
}