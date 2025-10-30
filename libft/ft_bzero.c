/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:58:32 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/22 14:14:44 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_ptr;

	char_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = 0;
		i++;
	}
}
