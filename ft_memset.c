/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:57:10 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/10 18:07:43 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memblock, int symbol, size_t numbytes)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)memblock;
	i = 0;
	while (i < numbytes)
	{
		tmp[i] = (unsigned char)symbol;
		i++;
	}
	return (memblock);
}
