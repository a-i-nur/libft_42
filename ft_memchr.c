/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:19:35 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 14:10:09 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int byte, size_t numbytes)
{
	const unsigned char	*memtmp;
	unsigned char		bytetmp;
	size_t				i;

	memtmp = (const unsigned char *)memblock;
	bytetmp = (unsigned char)byte;
	i = 0;
	while (i < numbytes)
	{
		if (memtmp[i] == bytetmp)
			return ((void *)(memtmp + i));
		i++;
	}
	return (NULL);
}
