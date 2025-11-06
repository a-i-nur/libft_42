/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:30:59 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/11/06 13:22:45 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocate zero-initialized storage for an array.
 *
 * Allocates memory for an array of @p count_obj elements of @p size_per_obj
 * bytes each and returns a pointer to the allocated memory. The memory is
 * set to zero bytes. If the allocation fails, returns NULL.
 *
 * @param count_obj Number of elements.
 * @param size_per_obj Size of each element in bytes.
 * @return void* Pointer to zeroed memory, or NULL on failure.
 */
void	*ft_calloc(size_t count_obj, size_t size_per_obj)
{
	void	*result;

	result = malloc(count_obj * size_per_obj);
	if (!result)
		return (NULL);
	ft_bzero(result, count_obj * size_per_obj);
	return (result);
}
//if (size_per_obj != 0  && (count_obj > SIZE_MAX / bytes))
	//	return (NULL);