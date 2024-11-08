/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:27:56 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 15:57:51 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
	{
		return ((char *)(str + i));
	}
	return (NULL);
}
/*int	main(void)
{
	char * s = ft_strchr("imane",'a');
printf("%s", s);
}*/