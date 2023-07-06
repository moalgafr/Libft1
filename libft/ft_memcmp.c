/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:50:58 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/19 15:09:13 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// int main ()
// {
// 	unsigned char t1[] = "hello";
// 	unsigned char t2[] = "helllo";
// 	size_t n = 5;
// 	printf("%d",ft_memcmp(t1,t2,n));
// 	return (0);	
// }