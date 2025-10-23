/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:30:59 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 17:01:13 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t countobj, size_t bytes)
{
	void	*result;

	result = malloc(countobj * bytes);
	if (!result)
		return (NULL);
	ft_bzero(result, countobj * bytes);
	return (result);
}
//if (bytes != 0  && (countobj > SIZE_MAX / bytes))
	//	return (NULL);