/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:29:40 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/26 20:50:51 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	result;

// 	result = isalpha('.');
// 	if (result)
// 		printf("is alphabetic\n");
// 	else
// 		printf("is not alphabetic\n");
// 	return (0);
// }
