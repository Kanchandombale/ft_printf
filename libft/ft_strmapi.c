/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:35:36 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/23 11:56:38 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			ch;
	unsigned int	i;
	char			*array;

	i = 0;
	array = (char *)malloc(ft_strlen(s) + 1);
	if (array == NULL)
	{
		return (0);
	}
	while (i < ft_strlen(s))
	{
		ch = f(i, s[i]);
		array[i] = ch;
		i++;
	}
	array[i] = '\0';
	return (array);
}
