/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:49:33 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/22 16:47:44 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chrctr)
{
	size_t			len;
	size_t			i;
	unsigned char	trgt;

	len = ft_strlen(str);
	trgt = (unsigned char)chrctr;
	i = len;
	while (i > 0)
	{
		if ((unsigned char)str[i] == trgt)
			return ((char *)str + i);
		i--;
	}
	if ((unsigned char)str[i] == trgt)
		return ((char *)str + i);
	return (NULL);
}
