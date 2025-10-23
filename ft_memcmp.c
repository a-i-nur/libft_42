/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:07:28 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 14:41:44 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *membl1, const void *membl2, size_t numbytes)
{
	const unsigned char	*memtmp1;
	const unsigned char	*memtmp2;
	size_t				i;

	memtmp1 = (const unsigned char *)membl1;
	memtmp2 = (const unsigned char *)membl2;
	i = 0;
	while (i < numbytes)
	{
		if (memtmp1[i] != memtmp2[i])
			return (memtmp1[i] - memtmp2[i]);
		i++;
	}
	return (0);
}
