/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:14:47 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/29 18:08:05 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
int		ft_putchar_c(char c);
int		ft_putstr_s(char *str);
int		ft_pnb_p(size_t n, char *base);
int		ft_pnb_ux(unsigned int n, char *base);
int		ft_pn_di(int n);
int		ft_printf(const char *str, ...);

#endif
