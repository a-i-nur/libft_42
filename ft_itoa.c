/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:07:32 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/11/06 13:29:33 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_lennum(int num, int *sign)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		*sign = -1;
	}
	else
		*sign = 1;
	while (num != 0)
	{
		num = (num - num % 10) / 10;
		count++;
	}
	return (count);
}

static void	ft_trans(int n, char *num, int len_num, int sign)
{
	int		digit;

	num[len_num] = '\0';
	while (len_num-- >= 0)
	{
		digit = n % 10;
		num[len_num] = (digit * sign) + '0';
		n = (n - digit) / 10;
	}
	if (sign < 0)
		num[0] = '-';
}

/**
 * @brief Convert an int to a newly allocated string.
 *
 * Produces the decimal textual representation of @p n (base 10) including
 * a leading '-' for negative values. Returns NULL on allocation failure.
 *
 * @param n Integer to convert.
 * @return char* Newly allocated string representation, or NULL.
 */
char	*ft_itoa(int n)
{
	char	*num;
	int		len_num;
	int		sign;

	len_num = ft_count_lennum(n, &sign);
	num = (char *)malloc((len_num + 1) * sizeof(char));
	if (!num)
		return (NULL);
	ft_trans(n, num, len_num, sign);
	return (num);
}

/*int main()
{
	int n_plus = 2147483647;
	int n_minus = -2147483648;
	printf("plus = \"%s\", minus = \"%s\"\n", ft_itoa(n_plus), ft_itoa(n_minus));
	return (0);
}*/
