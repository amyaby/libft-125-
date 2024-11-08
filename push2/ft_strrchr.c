/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:06:37 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/24 20:06:48 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (str && len > 0 && str[len] != (char)c)
	{
		len--;
		if ((unsigned char)str[len] == (unsigned char)c)
			return ((char *)(str + len));
	}
	if ((unsigned char)str[len] == (unsigned char)c)
	{
		return ((char *)(str + len));
	}
	return (NULL);
}
/*int	main(void)
{
	char	*s = "imaneabasalah";

	printf("%p\n", ft_strrchr(s, 'a'));
    	printf("%p\n", strrchr(s, 'a'));

}*/