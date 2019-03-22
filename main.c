/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 12:07:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/22 10:50:39 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"
int		main(void)
{
//	char		s[10] = "Hello Word";
//	char		c = 'c';
//	char		b = 'b'; 
//	int		d = -4242;
//	char	*str = NULL;	
	char	c = 0;
	
//	c = 'c';
//	b = 'b';
//	ft_printf("||%08s||\n", s);
//	putchar('\n');
//	printf("return of printf = %d", printf("||%d||\n", d));
//	printf("Number of the p.len = %d\n", ft_printf("||%d||\n", d));
//	ft_printf("%Z\n");
//	printf("%Z\n");
//	putchar('\n');
//	printf("%jx\n", -4294967296);
//	ft_printf("%hd\n", 42);
//	printf("%%\n", "test");
//	ft_printf("%lld\n", 42);
//	printf("%s\n", str);
//	printf("|||||%05.d\n", 0);
//	printf("|||||%0 .5d\n", 0);
//	printf("|||||%5.0d\n", 0);
//	printf("********Seperate******\n");
//	ft_printf("FFFFF%05.d\n", 0);
//	ft_printf("FFFFF%0 .5d\n", 0);
//	ft_printf("FFFFF%5.0d\n", 0);
//	printf("%d\n", ft_printf("%-5.0%\n"));
//	printf("%d\n", printf("%-5.0%\n"));
	ft_printf("%c", 0);
	write(1, &c, 1); 
	return (0);
}
