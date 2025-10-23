/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:10:45 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/22 14:13:45 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int chrctr)
{
	if (chrctr >= 'A' && chrctr <= 'Z')
		chrctr = chrctr + ('a' - 'A');
	return (chrctr);
}
