/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:47:09 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 15:53:51 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main(void)
{
    t_list *head = ft_lstnew("World");
    t_list *new_node = ft_lstnew("Hello");

    ft_lstadd_front(&head, new_node);

    // Теперь список: "Hello" -> "World"
    printf("%s\n", (char *)head->content);          // Hello
    printf("%s\n", (char *)head->next->content);    // World
}*/