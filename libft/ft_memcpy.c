/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:54:24 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/26 22:04:06 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)src;
	de = (unsigned char *)dst;
	i = 0;
	if (!de && !sc)
		return (NULL);
	while (i < n)
	{
		de[i] = sc[i];
		i++;
	}
	return (de);
}

// int main ()
// {
// char d[] = "yu";
// char s[] = "meow";
// printf("%s", ft_memcpy(d,s,2));
// return(0);
// }