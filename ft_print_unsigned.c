/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:51:40 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/29 13:35:32 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsigned_num(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_put_unsigned_num(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

static int	ft_number_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	ft_put_unsigned_num(n);
	return (ft_number_len(n));
}
