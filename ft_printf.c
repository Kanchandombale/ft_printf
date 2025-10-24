/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:38:00 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/24 11:42:24 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_printf(const char *, ...)
{
	printf("My name is %s and I am %d years old", "Kanchan", 30);
}

int	main(void)
{
	ft_printf("My name is %s and I am %d years old", "Kanchan", 30);
}
