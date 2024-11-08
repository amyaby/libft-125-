/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:45:34 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/26 14:08:51 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}
/*int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("ana");
	t_list *node2 = ft_lstnew("smiti");
	t_list *node3 = ft_lstnew("kounouno");
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node3);
	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}*/