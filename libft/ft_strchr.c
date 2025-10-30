/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:11:40 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/21 14:09:48 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i]) != '\0')
	{
		if ((unsigned char) c == (unsigned char) s[i])
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if ((unsigned char) c == '\0')
	{
		return ((char *) &s[i]);
	}
	return (0);
}
