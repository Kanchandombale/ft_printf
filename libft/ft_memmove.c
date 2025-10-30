/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:12:04 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/21 14:04:46 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_ptr_src;
	char	*char_ptr_dest;

	char_ptr_src = (char *)src;
	char_ptr_dest = (char *)dest;
	if (dest == 0 && src == 0)
		return (0);
	if (dest <= src)
	{
		while (n--)
		{
			*char_ptr_dest++ = *char_ptr_src++;
		}
	}
	else if (dest > src)
	{
		char_ptr_dest += n - 1;
		char_ptr_src += n - 1;
		while (n--)
		{
			*char_ptr_dest-- = *char_ptr_src--;
		}
	}
	return (dest);
}
