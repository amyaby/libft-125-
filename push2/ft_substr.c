/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:10:45 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/24 20:14:07 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_string;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_string = malloc((len + 1) * sizeof(char));
	if (!sub_string)
		return (NULL);
	while (i < len)
	{
		sub_string[i] = s[start + i];
		i++;
	}
	sub_string[len] = '\0';
	return (sub_string);
}
/*int main()
{
    char str[] = "Hello, world!";

    char *substr1 = ft_substr(str, 7, 5);
    printf("Substring 1: %s\n", substr1);
    free(substr1);

    char *substr2 = ft_substr(str, 15, 10);
    printf("Substring 2: %s\n", substr2);
    free(substr2);

    return (0);
}*/