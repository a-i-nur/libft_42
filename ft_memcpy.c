/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:14:32 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/22 14:27:36 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dstmem, const void *srcmem, size_t numbytes)
{
	const unsigned char	*srctemp;
	unsigned char		*dsttemp;
	size_t				i;

	srctemp = (const unsigned char *)srcmem;
	dsttemp = (unsigned char *)dstmem;
	i = 0;
	if (!dstmem && !srcmem)
	{
		return (NULL);
	}
	if (dstmem == srcmem || numbytes == 0)
	{
		return (dstmem);
	}
	while (i < numbytes)
	{
		dsttemp[i] = srctemp[i];
		i++;
	}
	return (dstmem);
}
