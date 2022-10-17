/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnb_ux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:32:48 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/29 21:07:29 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pnb_ux(unsigned int n, char *base)
{
	int				base_size;
	unsigned int	nbr_final[100];
	int				i;
	int				rt_val;

	i = 0;
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}	
	while (n != 0)
	{
		nbr_final[i] = n % base_size;
		n = n / base_size;
		i++;
	}
	rt_val = i;
	while (--i >= 0)
		write(1, &base[nbr_final[i]], 1);
	return (rt_val);
}
