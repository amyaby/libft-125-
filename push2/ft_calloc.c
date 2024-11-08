/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:39:03 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 16:59:01 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr_block, size_t size_block)
{
	void	*array;

	if (size_block && nbr_block >= (SIZE_MAX / size_block))
		return (NULL);
	array = malloc(nbr_block * size_block);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nbr_block * size_block);
	return (array);
}

/*int main()
{
	char *s = ft_calloc(4225454411552214555,4225455211552214555);
	printf("%s\n", s);
char	*s1 = calloc(4225454411552214555,4225455211552214555);
	printf("%s\n", s1);
}*/