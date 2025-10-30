/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:53:23 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/23 11:46:56 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits(long n);
char	*reverse(char *str);
char	*check_number(long num, char *str, int i);

int	ft_count_digits(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*reverse(char *str)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

char	*check_number(long num, char *str, int i)
{
	int	neg;

	neg = 0;
	if (num == 0)
		str[i++] = '0';
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	while (num)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;

	num = n;
	str = malloc(sizeof(char) * (ft_count_digits(num) + 1));
	if (!str)
		return (NULL);
	check_number(num, str, 0);
	reverse(str);
	return (str);
}
