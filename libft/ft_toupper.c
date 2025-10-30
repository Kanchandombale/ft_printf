/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:00:43 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/17 09:54:35 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*If  c  is  a lowercase letter, toupper() returns its uppercase equivalent*/

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (c - 32);
	}
	return (c);
}
