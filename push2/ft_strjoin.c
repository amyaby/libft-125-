/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:38:47 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/01 14:12:08 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!concat_str)
		return (NULL);
	ft_strlcpy(concat_str, s1, len1 + 1);
	ft_strlcpy(concat_str + len1, s2, len2 + 1);
	return (concat_str);
}

// int main()
// {
// 	printf("%s\n",ft_strjoin("I'm a genius",NULL));
// 	return(0);
// }
