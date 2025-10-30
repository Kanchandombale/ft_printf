/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:14:35 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/20 13:09:55 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_number;
	int			j;
	char		dash;
	char		ch;

	long_number = n;
	if (long_number < 0)
	{
		dash = '-';
		write(fd, &dash, 1);
		long_number = long_number * -1;
	}
	if (long_number >= 0 && long_number < 10)
	{
		ch = long_number + '0';
		write(fd, &ch, 1);
	}
	if (long_number >= 10)
	{
		j = 0;
		ft_putnbr_fd(long_number / 10, fd);
		j = long_number % 10 + '0';
		write(fd, &j, 1);
	}
}
