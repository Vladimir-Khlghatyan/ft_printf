/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pn_di .c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:53:59 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/29 21:17:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len += 1;
		n = n / 10;
	}
	return (len);
}

int	ft_pn_di(int n)
{
	unsigned int	x;

	x = 0;
	if (n < 0)
	{
		ft_putchar_c('-');
		x = -n;
	}
	else
		x = n;
	if (x > 9)
	{
		ft_pn_di(x / 10);
		ft_pn_di(x % 10);
	}
	else
		ft_putchar_c(x + '0');
	return (ft_numlen(n));
}
