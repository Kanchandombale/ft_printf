/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:38:37 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/22 10:08:41 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup_string;

	i = 0;
	dup_string = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (dup_string == NULL)
	{
		return (0);
	}
	if (s[0] == '\0')
	{
		dup_string[0] = '\0';
		return (dup_string);
	}
	while (s[i] != '\0')
	{
		dup_string[i] = s[i];
		i++;
	}
	dup_string[i] = '\0';
	return (dup_string);
}
