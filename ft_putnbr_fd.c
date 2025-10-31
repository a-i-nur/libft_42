/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:41:51 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 15:16:54 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	num = ft_itoa(n);
	ft_putstr_fd(num, fd);
}

/*int main()
{
	int n_plus = 2147483647;
	int n_minus = -2147483648;
	ft_putnbr_fd(n_plus, 1);
	printf("\n");
	ft_putnbr_fd(n_minus, 1);
	printf("\n");
	return (0);
}*/
