/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:16:47 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/24 20:04:45 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	int	dtr[4]= {1,2,3};
	printf("%d\n", dtr[0]);
	ft_bzero(dtr, 2);
	printf("%d\n", dtr[0]); 
    bzero(dtr, 2);        
    printf("%d\n", dtr[0]);
	return (0);
}*/
