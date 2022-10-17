/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:13:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/29 21:14:27 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_mandatory(const char *str, va_list ap, int rv)
{
	if (*str == 'c')
		rv += ft_putchar_c(va_arg(ap, int));
	else if (*str == 's')
		rv += ft_putstr_s(va_arg(ap, char *));
	else if (*str == 'p')
		rv += ft_pnb_p(va_arg(ap, size_t), "0123456789abcdef");
	else if (*str == 'd' || *str == 'i')
		rv += ft_pn_di(va_arg(ap, int));
	else if (*str == 'u')
		rv += ft_pnb_ux(va_arg(ap, unsigned int), "0123456789");
	else if (*str == 'x')
		rv += ft_pnb_ux(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (*str == 'X')
		rv += ft_pnb_ux(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (*str == '%')
		rv += ft_putchar_c('%');
	return (rv);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		rv;

	rv = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			rv = ft_mandatory(str, ap, rv);
			str++;
			continue ;
		}
		rv += ft_putchar_c(*str);
		str++;
	}
	va_end(ap);
	return (rv);
}
