/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:38:57 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 21:38:36 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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

	printf("%d", ft_lstsize(head));
}*/