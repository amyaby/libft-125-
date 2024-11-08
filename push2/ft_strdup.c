/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:55:23 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/24 15:07:09 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, str, ft_strlen(str) + 1);
	return (dup);
}

/*int	main(void)
{
	char *word = "hello";
	printf("%s\n", ft_strdup(word));
	printf("%s\n", strdup(word));
}*/