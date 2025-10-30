/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:12:02 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/20 09:27:47 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	int				sum;
	int				i;

	i = 0;
	sum = 0;
	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size > dest_length)
	{
		sum = dest_length + src_length;
	}
	else
	{
		sum = src_length + size;
	}
	while (src[i] && size > (dest_length + 1))
	{
		dst[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dst[dest_length] = '\0';
	return (sum);
}
