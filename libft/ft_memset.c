/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:00:51 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/17 09:41:54 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*char_ptr;

	char_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = c;
		i++;
	}
	return (s);
}
