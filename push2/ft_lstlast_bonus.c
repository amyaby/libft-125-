/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:37 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/25 19:22:58 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("ana");
	t_list *node2 = ft_lstnew("smiti");
	t_list *node3 = ft_lstnew("hhhh");
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	printf("%s", (char *)ft_lstlast(head)->content);
}*/