/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:26:41 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/22 09:54:42 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_string;
	size_t	i;
	size_t	j;

	concat_string = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (concat_string == NULL)
		return (0);
	j = 0;
	i = 0;
	while (i < ft_strlen(s1))
	{
		concat_string[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		concat_string[j] = s2[i];
		j++;
		i++;
	}
	concat_string[j] = '\0';
	return (concat_string);
}
