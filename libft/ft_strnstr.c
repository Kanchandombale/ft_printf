/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:02:38 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/23 10:54:14 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bigch;

	i = 0;
	if (little[0] == '\0')
	{
		bigch = (char *)big;
		return (bigch);
	}
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && little[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			bigch = (char *)&big[i];
			return (bigch);
		}
		i++;
	}
	return (0);
}
