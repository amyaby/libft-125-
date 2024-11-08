/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:35:15 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 21:41:21 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
// int	main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Overlapping Example";

// 	// Test non-overlapping
// 	printf("Original str1: %s\n", str1);
// 	ft_memmove(str1 + 7, str1, 6);
// 	printf("After ft_memmove (non-overlapping): %s\n", str1);
// 	memmove(str1 + 7, str1, 6);
// 	printf("After memmove (non-overlapping): %s\n", str1);
// 	// Test overlapping
// 	printf("Original str2: %s\n", str2);
// 	t_memmove(str2 + 10,f str2 + 5, 5);
// 	printf("After ft_memmove (overlapping): %s\n", str2);
// 	memmove(str2 + 10, str2 + 5, 5);
// 	printf("After memmove (overlapping): %s\n", str2);
// 	return (0);
// }

/*int main()
{
	char s[] = "abcde";
	ft_memmove(s+2,s,3)
	return (0);
}*/
