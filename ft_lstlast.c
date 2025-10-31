/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:06:46 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 16:29:38 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = lst;
	if (lst)
	{
		while (last_node->next)
			last_node = last_node-> next;
	}
	return (last_node);
}

/*int main(void)
{
    t_list *a = ft_lstnew("A");
    t_list *b = ft_lstnew("B");
    t_list *c = ft_lstnew("C");

    ft_lstadd_front(&a, b); // b -> a
    ft_lstadd_front(&b, c); // c -> b -> a

    t_list *last = ft_lstlast(c);
    printf("Last node: %s\n", (char *)last->content); // Выведет: A
}*/