/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:52:07 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/27 18:40:57 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	len_str;
	size_t	i;
	size_t	len_avail;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (start >= len_str)
		return (ft_strdup(""));
	len_avail = ft_strlen(s + start);
	if (len_avail < len)
		len = len_avail;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

//int main()
//{
//	printf("exp = \"He\", my_f = \"%s\"\n", ft_substr("Hello", 0, 2));
//	printf("exp = \"llo\", my_f = \"%s\"\n", ft_substr("Hello", 2, 10));
//	printf("exp = \"\", my_f = \"%s\"\n", ft_substr("Hello", 5, 2));
//	printf("exp = \"\", my_f = \"%s\"\n", ft_substr("", 0, 5));
//	printf("exp = \"\", my_f = \"%s\"\n", ft_substr("abc", 100, 1));
//}m