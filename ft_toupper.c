/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:04:14 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/22 14:09:30 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int chrctr)
{
	if (chrctr >= 'a' && chrctr <= 'z')
		chrctr = chrctr - ('a' - 'A');
	return (chrctr);
}
