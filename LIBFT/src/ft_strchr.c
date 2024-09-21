/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                              			:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:22 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/16 17:16:55 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;
	unsigned char	j;

	i = 0;
	j = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char)str[i] == j)
			return ((char *)&str[i]);
		i++;
	}	
	if (j == '\0')
		return ((char *)&str[i]);
	
	return ('\0');
}