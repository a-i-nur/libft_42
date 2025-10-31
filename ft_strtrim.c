/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:27:49 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/28 14:25:46 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief   Allocates and returns a copy of 's1' with the characters
 *           specified in 'set' removed from the beginning and the end.
 *
 * @param   s1   The string to be trimmed.
 * @param   set  The set of characters to remove 
 * 					from the start and end of 's1'.
 *
 * @return  A newly allocated trimmed string.
 *          NULL if memory allocation fails or if 's1' is NULL.
 *
 * @note    The returned string must be freed by the caller.
 * @note    If all characters are removed, an empty string ("") is returned.
 *
 * @example
 *          ft_strtrim("  !!Hello!!  ", " !"); // returns "Hello"
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left_trim;
	size_t	right_trim;
	size_t	len_trim;
	char	*trim_str;

	if (!s1 || !set)
		return (NULL);
	left_trim = 0;
	while (ft_strchr(set, s1[left_trim]))
		left_trim++;
	right_trim = ft_strlen(s1);
	if (left_trim < right_trim)
		while (ft_strchr(set, s1[right_trim - 1]))
			right_trim--;
	else
		return (ft_strdup(""));
	len_trim = right_trim - left_trim;
	trim_str = ft_substr(s1, left_trim, len_trim);
	return (trim_str);
}

/*int main()
{
	char *s1;
	char *set;
	char *result;
	
	s1 = "   hhhhh123h t4567tttt  ";
	set = "h t";
	result = ft_strtrim(s1, set);
	printf("result = \"%s\"\n", result);
	free(result);

	s1 = "   hhhhh  tttt  ";
	set = "h t";
	result = ft_strtrim(s1, set);
	printf("result = \"%s\"\n", result);
	free(result);

	s1 = "   hhhhh123h t4567tttt  ";
	set = "3";
	result = ft_strtrim(s1, set);
	printf("result = \"%s\"\n", result);
	free(result);
	return (0);
}*/