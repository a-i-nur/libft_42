/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:14 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 13:54:51 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str_result;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str_result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str_result)
		return (NULL);
	while (s[i])
	{
		str_result[i] = f(i, s[i]);
		i++;
	}
	str_result[i] = '\0';
	return (str_result);
}
