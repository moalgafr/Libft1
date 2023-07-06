/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:02:01 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/19 14:28:06 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (0);
}

// int main ()
// {
// 	 char x[10] = "hlloew";
//     size_t n = 6;
//      int c = 108;
//      char *result = ft_memchr(x, c, n);
// 	printf("%s", result);

// }
