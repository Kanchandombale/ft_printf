/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:52:46 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/29 14:12:29 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned int n, const char *base)
{
	char	c;

	if (n >= 16)
		ft_puthex(n / 16, base);
	c = base[n % 16];
	write(1, &c, 1);
}

static int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	const char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	ft_puthex(n, base);
	return (ft_hexlen(n));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int result;

// 	result = ft_print_hex(100, 0);
// 	printf("%X", result);
// }