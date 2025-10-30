/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:46:32 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/21 14:33:46 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_character(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_string;
	int		j;
	int		i;

	i = 0;
	if ((!set) || (!s1))
		return (NULL);
	while (s1[i] != '\0' && check_character(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && check_character(s1[j - 1], set))
	{
		j--;
	}
	trim_string = (char *)malloc(sizeof(char) * (j - i + 1));
	if (trim_string == NULL)
	{
		return (NULL);
	}
	ft_memcpy(trim_string, s1 + i, (j - i));
	trim_string[(j - i)] = '\0';
	return (trim_string);
}

int	check_character(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
