/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:54:39 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 16:02:38 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count_lst;
	t_list	*tmp_lst;

	count_lst = 0;
	tmp_lst = lst;
	while (tmp_lst)
	{
		count_lst++;
		tmp_lst = tmp_lst->next;
	}
	return (count_lst);
}

/*int main(void)
{
    t_list *a = ft_lstnew("A");
    t_list *b = ft_lstnew("B");
    t_list *c = ft_lstnew("C");

    ft_lstadd_front(&a, b); // b -> a
    ft_lstadd_front(&b, c); // c -> b -> a

    int size = ft_lstsize(c);
    printf("List size: %d\n", size); // Выведет: 3
}*/