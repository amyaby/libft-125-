/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:17:42 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 15:31:59 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (dst == NULL && src && size == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	while (dst[i] && i < size)
	{
		i++;
	}
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*int	main(void)
{
	printf("%lu \n", strlcat(NULL, "DSGDJG", 0));
}*/