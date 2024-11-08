/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:18:04 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/24 13:19:01 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	k;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == k)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{

	char *str = "Hala ho nana";
	printf("%p\n", ft_memchr(str, 'H', 2));
	printf("%p\n", memchr(str, 'H', 2));
	printf("%p\n", ft_memchr(str, 'b', 5));
        printf("%p\n", memchr(str, 'b', 5));
}*/
