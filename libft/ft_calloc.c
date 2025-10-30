/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:57:42 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/22 13:42:31 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*memalloc;

	i = 0;
	memalloc = (char *)malloc(nmemb * size);
	if (memalloc == NULL || size == 0)
	{
		return (memalloc);
	}
	while (i < (nmemb * size))
	{
		memalloc[i] = 0;
		i++;
	}
	return (memalloc);
}
