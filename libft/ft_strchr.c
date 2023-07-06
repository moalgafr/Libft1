/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:54:11 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/26 22:39:59 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char)c;
	while (str[i])
	{
		if (str[i] == k)
			return ((char *)&str[i]);
		i++;
	}
	if (k == '\0')
		return ((char *)&str[i]);
	return (0);
}

// int main() 
// {
//     char str[] = " moahmmed labib mohammed hassan algafri";
//     char *res = ft_strchr(str,'s');
//     printf("%s", res);
//     return(0);        
// }
