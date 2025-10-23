/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:07:34 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/21 16:54:56 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Когда области памяти могут пересекаться.
memcpy при перекрытии ведёт себя неопределённо, 
а memmove гарантирует корректный результат.

Если dst находится после src и диапазоны пересекаются, 
надо копировать справа налево (backward), чтобы не затереть байты, 
которые ещё не скопированы.

Иначе копировать слева направо (forward).
*/

#include "libft.h"

void	*ft_memmove(void *dstmem, const void *srcmem, size_t numbytes)
{
	const unsigned char	*srctemp;
	unsigned char		*dsttemp;
	size_t				i;

	srctemp = (const unsigned char *)srcmem;
	dsttemp = (unsigned char *)dstmem;
	i = 0;
	if (!dstmem && !srcmem)
		return (NULL);
	if (dstmem == srcmem || numbytes == 0)
		return (dstmem);
	if (dsttemp < srctemp)
	{
		while (i++ < numbytes)
			dsttemp[i - 1] = srctemp[i - 1];
	}
	else
	{
		i = numbytes;
		while (i-- > 0)
			dsttemp[i] = srctemp[i];
	}
	return (dstmem);
}
