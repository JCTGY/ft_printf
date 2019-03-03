/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_uninteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 12:25:32 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/02 16:19:32 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int		put_hash(t_printf *p)
{
	(p->con & CN_UX) ? ft_putstr("0X") : 0;
	(p->con & CN_LX) ? ft_putstr("0x") : 0;
	return (0);
}

static int		count_hash(int len, t_printf *p)
{
	if (p->con & CN_UX || p->con & CN_LX)
	   	len = len + 2;
	return (len);
}

int				printf_uninbr(uintmax_t nb, int base, t_printf *p)
{
	int		c;
	int		space;
	int		len;
	int		zero;
	char	*str;

	str = NULL;
	c = (p->con & CN_UX) ? 1 : 0;
	len = count_digit(nb, base);
	len = (p->flg & F_H || p->con & CN_P)
		? count_hash(len, p) : len;
	str = ft_itoa_base(c, base, nb);
	zero = count_zero(len, p);
	space = count_space(len, zero, p);
	p->len += (p->wid > (len + zero)) ? p->wid : (len + zero);
	(!(p->flg & F_N)) && ft_putnchar(space, ' ');
	ft_putnchar(zero, '0');
	(p->flg & F_H || p->con & CN_P) && put_hash(p);
	ft_putstr(str);
	(p->flg & F_N) && ft_putnchar(space, ' ');
	ft_strdel(&str);
	return (0);
}

int				printf_unsigned_int(t_printf *p, int base)
{
	if (p->lf & L_L)
		return (0);
	(p->con & CN_P) && (printf_uninbr\
			((uintmax_t)va_arg(p->va, void *), base, p));
	(p->lf & L_LLO)
		&& (printf_uninbr(va_arg(p->va, unsigned long long), base, p));
	(p->lf & L_LO)
		&& (printf_uninbr(va_arg(p->va, unsigned long), base, p));
	(p->lf & L_HH)
		&& (printf_uninbr((unsigned char)va_arg(p->va, unsigned int), base, p));
	(p->lf & L_H)
		&& (printf_uninbr((unsigned short)\
					va_arg(p->va, unsigned int), base, p));
	(!p->lf) && (printf_uninbr(va_arg(p->va, unsigned int), base, p));
	return (1);
}
