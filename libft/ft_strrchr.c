/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:27:42 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/21 14:29:44 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_ccurance ;

	last_ccurance = 0;
	i = 0;
	while ((s[i]) != '\0')
	{
		if ((unsigned char) c == (unsigned char) s[i])
		{
			last_ccurance = ((char *) &s[i]);
		}
		i++;
	}
	if ((unsigned char) c == '\0')
	{
		return ((char *) &s[i]);
	}
	return (last_ccurance);
}
