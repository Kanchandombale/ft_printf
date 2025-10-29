/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:49:24 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/29 14:25:41 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(uintptr_t n)
{
	char		c;
	const char	*base = "0123456789abcdef";

	if (n >= 16)
		ft_putptr(n / 16);
	c = base[n % 16];
	write(1, &c, 1);
}

static int	ft_ptrlen(uintptr_t n)
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

int	ft_print_ptr(void *p)
{
	uintptr_t	ptr;

	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ptr = (uintptr_t)p;
	write(1, "0x", 2);
	ft_putptr(ptr);
	return (ft_ptrlen(ptr) + 2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	void	*my_ptr;
// 	int		result;

// 	result = ft_print_ptr(my_ptr);
// 	printf("%d", result);
// }
