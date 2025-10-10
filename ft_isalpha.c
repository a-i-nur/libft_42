/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:56:23 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/10 15:31:27 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int symbol)
{
	if ((symbol >= 'A' && symbol <= 'Z')
		|| (symbol >= 'a' && symbol <= 'z'))
		return (1024);
	return (0);
}
