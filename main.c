/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 12:07:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/02 16:15:22 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"
int		main(void)
{
//	char		s[10] = "Hello Word";
//	char		c = 'c';
//	char		b = 'b'; 
	int		d = 255;
//	char	*str = NULL;
	
//	c = 'c';
//	b = 'b';
//	ft_printf("||%08s||\n", s);
//	putchar('\n');
	printf("||%5p||\n", &d);
	ft_printf("||%5p||\n", &d);
//	putchar('\n');
//
//	printf("%s\n", str);
	while (1) {}
	return (0);
}
