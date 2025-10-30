/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:52:09 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/23 10:43:07 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char	*ch1;
	const unsigned char	*ch2;
	int					j;
	size_t				counter;

	i = 0;
	j = 0;
	counter = 0;
	ch1 = s1;
	ch2 = s2;
	while (counter < n)
	{
		if (ch1[i] > ch2[i])
			return (ch1[i] - ch2[j]);
		else if (ch1[i] < ch2[j])
		{
			return (ch1[i] - ch2[j]);
		}
		i++;
		j++;
		counter++;
	}
	return (0);
}
