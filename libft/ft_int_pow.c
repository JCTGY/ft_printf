/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_pow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 15:31:09 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/26 15:42:56 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

intmax_t	ft_int_pow(intmax_t x, intmax_t y)
{
	intmax_t	r;

	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	r = 1;
	while (y > 0)
	{
		r = r * x;
		y--;
	}
	return (r);
}
