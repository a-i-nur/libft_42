/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:53:15 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 16:18:33 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkspace(const char *str)
{
	int	count;

	count = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\t'
		|| str[count] == '\r' || str[count] == '\f' || str[count] == '\v')
		count++;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	i = ft_checkspace(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0') * sign;
		i++;
	}
	return (num);
}

// int	main(void)
// {
// 	printf("TEST 1: %d\n", ft_atoi("  	\n	-2147483648"));
// 	printf("TEST 2: %d\n", ft_atoi("  \t\r\v\f 	-2147483647eljkcnerjkn"));
// 	printf("TEST 3: %d\n", ft_atoi("-10000"));
// 	printf("TEST 4: %d\n", ft_atoi("+10000"));
// 	printf("TEST 5: %d\n", ft_atoi("-0"));
// 	printf("TEST 6: %d\n", ft_atoi("-1"));
// 	printf("TEST 7: %d\n", ft_atoi("1"));
// 	printf("TEST 6: %d\n", ft_atoi("12345      "));
// 	printf("TEST 7: %d\n", ft_atoi("-12345hfhdfgfg"));
// 	printf("TEST 6: %d\n", ft_atoi("-2147483649"));
// 	printf("TEST 7: %d\n", ft_atoi("2147483648"));
//	printf("TEST 1: %d\n", ft_atoi("  	\n	2147483647"));
// 	return(0);
// }
