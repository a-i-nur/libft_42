/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:31:12 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 16:56:41 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst)
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
	else
	{
		*lst = new;
	}
}

/*int main(void)
{
    t_list *list = ft_lstnew("A");
    t_list *new1 = ft_lstnew("B");
    t_list *new2 = ft_lstnew("C");

    ft_lstadd_back(&list, new1);
    ft_lstadd_back(&list, new2);

    // Результат: [A] -> [B] -> [C] -> NULL
    printf("%s\n", (char *)list->content);          // A
    printf("%s\n", (char *)list->next->content);    // B
    printf("%s\n", (char *)list->next->next->content); // C
}*/