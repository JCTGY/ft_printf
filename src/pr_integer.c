/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 08:40:25 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/02 13:03:52 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int			count_space(int len, int zero, t_printf *p)
{
	int		space;

	space = 0;
	if (p->wid && p->wid > (zero + len))
		space = p->wid - (zero + len);
	return (space);
}

int			count_digit(intmax_t nb, int base)
{
	int		len;

	len = 0;
	while (nb)
	{
		len++;
		nb = nb / base;
	}
	return (len);
}

int			count_zero(int len, t_printf *p)
{
	int		zero;

	zero = 0;
	if (p->pre && p->pre > len)
		zero = p->pre - len;
	if (!p->pre && p->wid > len && p->flg & F_Z)
		zero = p->wid - len;
	return (zero);
}

int			printf_nbr(intmax_t nb, t_printf *p)
{
	int		zero;
	int		space;
	int		len;

	len = count_digit(nb, 10);
	zero = count_zero(len, p);
	len = (nb < 0 || (p->flg & F_P) || (p->flg & F_S))
		? len + 1 : len;
	space = count_space(len, zero, p);
	p->len += (p->wid > (len + zero))
			? p->wid : (len + zero);
	(!(p->flg & F_N)) && ft_putnchar(space, ' ');
	(nb < 0) && ft_putchar('-');
	(nb >= 0 && (p->flg & F_P)) && ft_putchar('+');
	(nb >= 0 && (p->flg & F_S) && !(p->flg & F_P))
		&& ft_putchar(' ');
	ft_putnchar(zero, '0');
	ft_putuintmax((nb > 0) ? nb : -nb);
	(p->flg & F_N) && ft_putnchar(space, ' ');
	return (0);
}

int			printf_integer(t_printf *p)
{
	if (p->lf & L_L)
		return (0);
	(p->lf & L_LLO) &&
		(printf_nbr(va_arg(p->va, long long), p));
	(p->lf & L_LO) && (printf_nbr(va_arg(p->va, long), p));
	(p->lf & L_HH) && (printf_nbr((char)va_arg(p->va, int), p));
	(p->lf & L_H) && (printf_nbr((short)va_arg(p->va, int), p));
	(!p->lf) && (printf_nbr(va_arg(p->va, int), p));
	return (1);
}
