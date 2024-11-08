/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:11:59 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/26 05:59:38 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void print_content(void *content)
{
    printf("%s\n", (char *)content);
   
}

int	main(void)
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("world");
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);

    ft_lstiter(head, print_content); // This will print each node's content
    return (0);
}*/
