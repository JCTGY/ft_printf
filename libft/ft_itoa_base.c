/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 14:37:50 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/01 20:27:42 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int c, int base, intmax_t nb)
{
	char	*b;
	char	*s;
	int		len;

	if (base < 2 || base > 16 || !nb)
		return (0);
	if (base == 10)
		return (ft_itoa(nb));
	len = ft_count_digit(nb, base);
	s = ft_strnew(len);
	b = ft_strnew(16);
	(c == 1) ? (ft_strcpy(b, "0123456789ABCDEF"))
		: (ft_strcpy(b, "0123456789abcdef"));
	s[len] = '\0';
	while (--len >= 0)
	{
		s[len] = b[nb % base];
		nb = nb / base;
	}
	ft_strdel(&b);
	return (s);
}
