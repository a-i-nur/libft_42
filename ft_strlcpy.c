/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:15:44 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/21 17:47:45 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dststr, const char *srcstr, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(srcstr);
	if (dstsize == 0)
		return (srclen);
	while (i < srclen && i < dstsize - 1)
	{
		dststr[i] = srcstr[i];
		i++;
	}
	dststr[i] = '\0';
	return (srclen);
}
