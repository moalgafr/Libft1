/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:52:05 by moalgafr          #+#    #+#             */
/*   Updated: 2023/06/21 21:01:33 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	l = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (!len)
		return (NULL);
	while (*haystack != '\0' && len >= l)
	{
		if (ft_strncmp(haystack, needle, l) == 0)
			return ((char *)haystack);
			haystack++;
			len--;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", strnstr("fake", NULL, 0));
// 	printf("%s\n", ft_strnstr("fake", NULL, 0));
// }