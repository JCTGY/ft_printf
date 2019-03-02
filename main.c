/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 12:07:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/01 20:21:03 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"
int		main(void)
{
//	char		s[10] = "Hello Word";
//	char		c = 'c';
//	char		b = 'b'; 
	int		d = 15;
	char	*str = NULL;
	
	str = ft_itoa_base(1, 2, d);
//	c = 'c';
//	b = 'b';
//	ft_printf("||%08s||\n", s);
//	putchar('\n');
//	printf("||%08s||\n", s);
//	ft_printf("%10c\n");
//	putchar('\n');
//
	printf("%s\n", str);
	free(str);
	str = NULL;
//	printf("%s\n", ft_itoa_base(1, 16, d));
	while (1) {}
	return (0);
}
