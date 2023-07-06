/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:43:51 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/22 22:39:06 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	k;

	i = 0;
	str = 0;
	k = (char)c;
	while (s[i])
	{
		if (s[i] == k)
		str = (char *)(s + i);
		i++;
	}
	if (s[i] == k)
	str = (char *)(s + i);
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char s[] = "nnnnnnyooeeekk";
// 	char *res = ft_strrchr(s, 'y');
// 	printf("%s", res);
// 	return (0);
// }