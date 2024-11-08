/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:41:32 by iabasala          #+#    #+#             */
/*   Updated: 2024/11/02 15:39:14 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	index;

	index = 0;
	if (n <= 0)
		index++;
	while (n != 0)
	{
		n /= 10;
		index++;
	}
	return (index);
}

char	*ft_itoa(int n)
{
	char			*ascii;
	int				len;
	long long int	num;

	(1) && (len = count(n), ascii = malloc(len + 1));
	if (!ascii)
		return (NULL);
	ascii[len] = '\0';
	num = n;
	if (num < 0)
	{
		ascii[0] = '-';
		num = -num;
	}
	else if (num == 0)
	{
		ascii[0] = '0';
		return (ascii);
	}
	while (num > 0)
	{
		ascii[--len] = num % 10 + '0';
		num /= 10;
	}
	return (ascii);
}
/*int	main(void)
{
	printf("%s\n", ft_itoa(-1337));
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
	printf("%s\n", ft_itoa(-0));
}*/
