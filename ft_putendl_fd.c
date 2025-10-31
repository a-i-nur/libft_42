/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:24:26 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 14:39:06 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	new_line;

	if (!s)
		return ;
	new_line = '\n';
	ft_putstr_fd(s, fd);
	ft_putchar_fd(new_line, fd);
}
