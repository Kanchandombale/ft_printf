/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:15:03 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/22 09:53:22 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;
	size_t				i;

	ch = s;
	i = 0;
	while (i < n)
	{
		if (ch[i] == (unsigned char)c)
		{
			return ((char *)&ch[i]);
		}
		i++;
	}
	return (NULL);
}
