/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:32:33 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/31 20:36:00 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/* void	print_content(void *content)
{
	printf("%s\n", (char *)content);
} */

/* int	main(void)
{
	t_list *a = ft_lstnew("Hello");
	t_list *b = ft_lstnew("42");
	t_list *c = ft_lstnew("Network");

	a->next = b;
	b->next = c;

	ft_lstiter(a, print_content);
    print_content(a->content);
	// Вывод:
	// Hello
	// 42
	// Network

	return (0);
} */