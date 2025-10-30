/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:26:12 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/17 13:20:18 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_ptr_src;
	char	*char_ptr_dest;

	char_ptr_src = (char *)src;
	char_ptr_dest = (char *)dest;
	i = 0;
	if (!src && !dest)
	{
		return (0);
	}
	while (i < n)
	{
		char_ptr_dest[i] = char_ptr_src[i];
		i++;
	}
	return (char_ptr_dest);
}
