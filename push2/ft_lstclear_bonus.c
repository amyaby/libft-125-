/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:24:56 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 21:32:34 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}*/

/*int	main(void)
{
	t_list	*head;

	head = ft_lstnew(strdup("Node 1"));
	ft_lstadd_front(&head, ft_lstnew(strdup("Node 2")));
	ft_lstadd_front(&head, ft_lstnew(strdup("Node 3")));
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	ft_lstclear(&head, del);
    while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
}*/
