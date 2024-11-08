/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:30:09 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 21:40:35 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_string;

	new_string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new_string[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main()
// {
// int c = 5;
// 	//ft_memset(&c,0,1);
// 	// 	ft_memset(&c,0,1);
// 	// ft_memset(&c,0,1);
// 		ft_memset(&c,0,3);
// 	//	ft_memset(&c,2,1); here we want to print 2
//ft_memset(&c,0,3);here we want to print 42
//ft_memset(&c,42,1);
//ft_memset(&c,0,4);
//ft_memset(&c,0,4);//here we want to print 789
//ft_memset(&c,0,3);
//ft_memset(&c,3,2);
//ft_memset(&c,21,1);
//printf("%d",c);
// }

/*int	main(void)
{
	char T[5] = "imane";
	ft_memset(T, 'l', 2);
	printf("%s\n", T);
	return (0);
}*/
/*int main()
{
char arr[5]; 
ft_memset(arr, '1', 1);
ft_memset(arr + 1, '3', 1);
ft_memset(arr + 2, '3', 1);  
ft_memset(arr + 3, '7', 1);  // Set the fourth byte to '7'
arr[4] = '\0'; // Null-terminate the string

printf("%s\n", arr); // Prints "1337"
}*/

// int main()
// {
// 	int c = 2;
// 	//100
// 	ft_memset(&c,100,1);
// 	printf("%d",c);

// }