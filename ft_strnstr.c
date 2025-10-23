/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:28:38 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 15:04:04 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigstr, const char *litstr, size_t num)
{
	size_t	i;
	size_t	litlen;

	if (litstr == 0)
		return ((char *)(bigstr));
	i = 0;
	litlen = ft_strlen(litstr);
	while (i < num && bigstr[i] != '\0')
	{
		if (bigstr[i] == litstr[0])
		{
			if (litlen <= num - i && !ft_strncmp(bigstr + i, litstr, litlen))
				return ((char *)(bigstr + i));
		}
		i++;
	}
	return (NULL);
}
