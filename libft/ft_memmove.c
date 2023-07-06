/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:00:15 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/26 22:33:13 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sc;
	size_t			i;
	unsigned long	nn;

	nn = (unsigned long)n;
	sc = (unsigned char *) src;
	de = (unsigned char *) dst;
	i = 0;
	if (de == 0 && sc == 0)
		return (NULL);
	if (de > sc)
		while (nn--)
			de[nn] = sc[nn];
	else
	{
		while (i < n)
		{
			de[i] = sc[i];
			i++;
		}
	}
	return (dst);
}

// int main (void)
// {
// 	unsigned char s[4] = "123";
// 	unsigned char b[5] = "";
// 	printf("this is our function m1: %s\n", ft_memmove(s, b, 8));
// 	// memmove(s, b, 5);
// 	printf("- %s\n- %s", s, b);
// 	return (0);
// }
