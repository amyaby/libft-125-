/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:19:48 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 15:59:17 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	point_to(unsigned int i, char *str)
// {
// 	(void)i;
// 	str = 'a';
// }
/*int	main(void)
{
	char	*str;

	str = NULL;
	ft_striteri(str, point_to);
	printf("%s\n", str);
	return (0);
}*/
