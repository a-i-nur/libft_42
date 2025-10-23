/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:21:23 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/22 16:47:02 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chrctr)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)chrctr)
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)chrctr)
		return ((char *)str + i);
	return (NULL);
}
