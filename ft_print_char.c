/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:35:58 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/29 13:24:14 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	result;

// 	result = ft_print_char(97);
// 	printf("%c", result);
// }
