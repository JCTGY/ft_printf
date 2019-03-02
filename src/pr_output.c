/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 09:11:41 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/01 14:13:32 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int				pr_output(t_printf *p)
{
	if (!p->con)
		return (0);
	(p->con & CN_C || p->con & CN_M) && printf_character(p);
	(p->con & CN_S) && printf_string(p);
	(p->con & CN_D || p->con & CN_I) && printf_integer(p);
	return (1);
}
