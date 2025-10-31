/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:07:03 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 17:31:43 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = tmp;
	}
	*lst = NULL;
}

void	del_content(void *content)
{
	free(content);
}

/*int	main(void)
{
	t_list *a = ft_lstnew(malloc(5));
	t_list *b = ft_lstnew(malloc(10));
	t_list *c = ft_lstnew(malloc(15));

	a->next = b;
	b->next = c;

	ft_lstclear(&a, del_content);
	// теперь a, b, c и их content — полностью освобождены
	// a == NULL
	return (0);
}*/