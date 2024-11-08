/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:23:33 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 15:41:46 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t max_dest_size)
{
	size_t	i;

	i = 0;
	if (max_dest_size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (max_dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*int main()
{
	int c = ft_strlcpy(NULL, "IMANE",0);
		int s = ft_strlcpy(NULL, "IMANE",0);

	printf("%d",c);
		printf("%d",s);

}*/