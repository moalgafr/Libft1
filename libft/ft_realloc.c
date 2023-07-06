/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:52:50 by moalgafr          #+#    #+#             */
/*   Updated: 2023/03/27 18:19:13 by moalgafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void *new_ptr;

	if (!ptr)
		return (ft_calloc(sizeof(size_t), size));
	if (!size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = ft_calloc(sizeof(size_t), size);
	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}