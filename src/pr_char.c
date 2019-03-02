/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:26:39 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/01 14:12:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		printf_string(t_printf *p)
{
	char	*str;
	int		len;
	int		space;

	if (p->flg & F_P || p->flg & F_Z || p->flg & F_H
			|| p->flg & F_S)
		return (0);
	if (!p->pre && !p->wid && p->flg & F_D)
		return (0);
	if (!(str = va_arg(p->va, char *)))
		return (0);
	len = ft_strlen(str);
	space = (p->pre) ? count_space(p->pre, 0, p)
		: count_space(len, 0, p);
	(!(p->flg & F_N)) && ft_putnchar(space, ' ');
	(!p->pre) ? ft_putstr(str) : ft_putnstr(str, p->pre);
	(p->flg & F_N) && ft_putnchar(space, ' ');
	len = (p->pre) ? p->pre : len;
	p->len += (p->wid > len) ? p->wid : len;
	return (1);
}

int		printf_character(t_printf *p)
{
	char	c;
	int		space;

	if (p->flg & F_P || p->flg & F_Z || p->flg & F_H
			|| p->flg & F_S)
		return (0);
	if (!(c = va_arg(p->va, int)))
		return (0);
	space = count_space(1, 0, p);
	!(p->flg & F_N) && ft_putnchar(space, ' ');
	ft_putchar(c);
	(p->flg & F_N) && ft_putnchar(space, ' ');
	return (1);
}
