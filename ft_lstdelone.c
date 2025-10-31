/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:00:17 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/29 17:08:24 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node = malloc(sizeof(t_list));
	node->content = malloc(10);  // допустим, ты что-то туда записал
	node->next = NULL;

	ft_lstdelone(node, del_content);
	// теперь node и его content полностью освобождены
	return (0);
}*/