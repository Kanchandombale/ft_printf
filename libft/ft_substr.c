/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:24:50 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/23 11:02:47 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *substring, char const *s, unsigned int start,
			size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		substring = (char *)malloc(sizeof(char) * (1));
		if (!substring)
			return (0);
		substring[0] = '\0';
		return (substring);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	ft_strcpy(substring, s, start, len);
	return (substring);
}

char	*ft_strcpy(char *substring, char const *s, unsigned int start,
		size_t len)
{
	size_t	i;

	i = 0;
	while ((i < len) && (s[start] != '\0'))
	{
		substring[i] = s[start];
		start++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
