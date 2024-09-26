/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:15:53 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/18 15:53:57 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (dest[len_dest] && len_dest < size)
		len_dest++;
	if (size <= len_dest)
		return (size + len_src);
	if (size != 0)
	{
		while (src[i] != '\0' && (len_dest + i) < (size - 1))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (len_dest + len_src);
}
