/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:43:32 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 13:38:38 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	const unsigned char	*strng1;
	const unsigned char	*strng2;
	size_t				i;

	strng1 = (const unsigned char *)str1;
	strng2 = (const unsigned char *)str2;
	i = 0;
	while (i < num)
	{
		if (strng1[i] != strng2[i] || strng1[i] == '\0' || strng2[i] == '\0')
			return (strng1[i] - strng2[i]);
		i++;
	}
	return (0);
}
