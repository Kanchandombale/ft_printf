/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:38:00 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/29 14:55:06 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier_typ(char spec, va_list *argumemt)
{
	if (spec == 'c')
		return (ft_print_char(va_arg(*argumemt, int)));
	if (spec == 's')
		return (ft_print_str(va_arg(*argumemt, const char *)));
	if (spec == 'p')
		return (ft_print_ptr(va_arg(*argumemt, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_print_signed(va_arg(*argumemt, int)));
	if (spec == 'u')
		return (ft_print_unsigned(va_arg(*argumemt, unsigned int)));
	if (spec == 'x')
		return (ft_print_hex(va_arg(*argumemt, unsigned int), 0));
	if (spec == 'X')
		return (ft_print_hex(va_arg(*argumemt, unsigned int), 1));
	if (spec == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		total;
	int		r;

	total = 0;
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			r = ft_specifier_typ(*format, &arguments);
			total += r;
		}
		else
		{
			write(1, format, 1);
			total++;
		}
		format++;
	}
	va_end(arguments);
	return (total);
}
