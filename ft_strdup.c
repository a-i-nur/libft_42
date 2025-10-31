/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:58:12 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/27 15:53:04 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief   Duplicates a given string by allocating memory
 * and copying its contents.
 *
 * @param   str  The string to duplicate.
 * @return  A newly allocated copy of the string, 
 * or NULL if memory allocation fails.
 *
 * @note    The returned string must be freed by the caller.
 */
char	*ft_strdup(const char *str)
{
	char	*duplicate;
	size_t	len_str;
	size_t	i;

	len_str = ft_strlen(str);
	duplicate = (char *)malloc((len_str + 1) * sizeof(char));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

//int main()
//{
//	char *dupstr1, *dupstr2;
//	dupstr1 = ft_strdup("hello");
//	if (dupstr1 == NULL)
//    {
//        printf("ft_strdup failed\n");
//    }
//	else
//	{
//		printf("my f: dupstr = %s\n", dupstr1);
//		free(dupstr1);
//	}
//	dupstr2 = ft_strdup("hello");
//	if (dupstr2 == NULL)
//    {
//        printf("strdup failed\n");
//    }
//	else
//	{
//		printf("orig: dupstr = %s\n", dupstr2);
//		free(dupstr2);
//	}
//	return (0);
//}