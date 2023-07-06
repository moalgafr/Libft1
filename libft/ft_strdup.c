/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:29:09 by moalgafr          #+#    #+#             */
/*   Updated: 2023/01/26 22:40:15 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	len = 0;
	while (s[len])
	{
	str[len] = s[len];
	len++;
	}
	str[len] = '\0';
	return (str);
}
