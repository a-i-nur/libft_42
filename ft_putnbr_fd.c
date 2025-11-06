/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:41:51 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/11/06 13:35:40 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Write an integer in decimal form to a file descriptor.
 *
 * Converts @p n to its decimal string representation (with a leading '-' if
 * negative) and writes it to file descriptor @p fd. No trailing newline is
 * added. Behavior matches standard printf("%d") formatting semantics except
 * no padding/width is applied.
 *
 * @param n Integer to write.
 * @param fd File descriptor to write to.
 */
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
