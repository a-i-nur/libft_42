/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:56:28 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/22 14:00:28 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dststr, const char *srcstr, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = 0;
	while (dstlen < dstsize && dststr[dstlen] != 0)
		dstlen++;
	srclen = ft_strlen(srcstr);
	if (dstsize == dstlen)
		return (dstsize + srclen);
	i = 0;
	j = dstlen;
	while (j < dstsize - 1 && i < srclen)
	{
		dststr[j] = srcstr[i];
		j++;
		i++;
	}
	dststr[j] = '\0';
	return (dstlen + srclen);
}
