/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 12:07:52 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/27 12:25:04 by jchiang-         ###   ########.fr       */
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
//	char	c = 0;
	double	d = -123456.789123456789;
	float	f = -123456.789123456789;
	long double l = -123456.789123456789;
	float	z = 0.0;
	long double	lz = 0.00000000001;
	double	dp = 123456.789123456789;
	float	fp = 0.00089123456789;
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
//	printf("%ZD", 0);

//	Test 1 //
	printf("***********check for float**********\n");
	printf("return long double = %d\n", printf("%Lf\n", l));
	printf("|||return long double||| = %d\n", ft_printf("%Lf\n", l));
	printf("*******1111111**************\n");
// Test 2 //
	printf("compare float and double = %d/%d\n", printf("%.16f\n", f), printf("%.16f\n", (float)d));
	printf("|||compare float and double||| = %d/%d\n", ft_printf("%.16f\n", f), ft_printf("%.16f\n", (float)d));
	printf("**********222222***********\n");
// Test 3 //
	printf("return hash with zero  1.0 = %d\n", printf("%#1.0f\n", d));
	printf("|||return hash with zero  1.0 |||= %d\n", ft_printf("%#1.0f\n", d));
	printf("*******33333333**************\n");
// Test 4 //
	printf("return .0  = %d\n", printf("%.0f\n", d));
	printf("|||return .0 ||| = %d\n", ft_printf("%.0f\n", d));
	printf("********4444*************\n");
// Test 5 //
	printf("return . = %d\n", printf("%.f\n", d));
	printf("|||return . |||= %d\n", ft_printf("%.f\n", d));
	printf("**********5555***********\n");
// Test 6 //
	printf("return + = %d\n", printf("%+f\n", d));
	printf("|||return + |||= %d\n", ft_printf("%+f\n", d));
	printf("**********6666***********\n");
// Test 7 //
	printf("return space = %d\n", printf("% f\n", d));
	printf("|||return space |||= %d\n", ft_printf("% f\n", d));
	printf("**********77777***********\n");
// Test 8 //
	printf("return 2.1 = %d\n", printf("%2.1f\n", d));
	printf("|||return 2.1 |||= %d\n", ft_printf("%2.1f\n", d));
	printf("***********8888**********\n");
// Test 9 //
	printf("return 2.2 = %d\n", printf("%2.2f\n", d));
	printf("|||return 2.2 |||= %d\n", ft_printf("%2.2f\n", d));
	printf("********9999*************\n");
// Test 10 //
	printf("return 2.3 = %d\n", printf("%2.3f\n", d));
	printf("|||return 2.3 |||= %d\n", ft_printf("%2.3f\n", d));
	printf("*******10**************\n");
// Test 11 //
	printf("return 020.5 = %d\n", printf("% 20.5f\n", d));
	printf("|||return 020.5 |||= %d\n", ft_printf("% 20.5f\n", d));
	printf("*********11************\n");
// Test 12 //
	printf("return 020.5 = %d\n", printf("%+20.5f\n", z));
	printf("|||return 020.5 |||= %d\n", ft_printf("%+20.5f\n", z));
	printf("********12*************\n");
// Test 13 //
	printf("return 020.5 = %d\n", printf("%-+20.5f\n", z));
	printf("|||return 020.5||| = %d\n", ft_printf("%-+20.5f\n", z));
	printf("**********13***********\n");
// Test 14 //
	printf("return positive 2.3 = %d\n", printf("%2.3f\n", dp));
	printf("|||return 2.3 |||= %d\n", ft_printf("%2.3f\n", dp));
	printf("*******14**************\n");
// Test 15 //
	printf("return positive 020.5 = %d\n", printf("% 20.5f\n", dp));
	printf("|||return 020.5 |||= %d\n", ft_printf("% 20.5f\n", dp));
	printf("*********15************\n");
// Test 16 //
	printf("return 20.0  = %d\n", printf("%20.0f\n", d));
	printf("|||return 20.0 ||| = %d\n", ft_printf("%20.0f\n", d));
	printf("********16*************\n");
//	Test 17 //
	printf("***********check for float**********\n");
	printf("return less 0.0 = %d\n", printf("%f\n", fp));
	printf("|||return long double||| = %d\n", ft_printf("%f\n", fp));
	printf("*******17**************\n");
// Test 2 //
	printf("compare float and double = %d/%d\n", printf("%.16f\n", f), printf("%.16f\n", (float)d));
	printf("|||compare float and double||| = %d/%d\n", ft_printf("%.16f\n", f), ft_printf("%.16f\n", (float)d));
	printf("**********222222***********\n");
// Test 3 //
	printf("return hash with zero  1.0 = %d\n", printf("%#1.0Lf\n", l));
	printf("|||return hash with zero  1.0 |||= %d\n", ft_printf("%#1.0Lf\n", l));
	printf("*******33333333**************\n");
// Test 4 //
	printf("return .0  = %d\n", printf("%.0Lf\n", l));
	printf("|||return .0 ||| = %d\n", ft_printf("%.0Lf\n", l));
	printf("********4444*************\n");
// Test 5 //
	printf("return . = %d\n", printf("%.Lf\n", l));
	printf("|||return . |||= %d\n", ft_printf("%.Lf\n", l));
	printf("**********5555***********\n");
// Test 6 //
	printf("return + = %d\n", printf("%+Lf\n", l));
	printf("|||return + |||= %d\n", ft_printf("%+Lf\n", l));
	printf("**********6666***********\n");
// Test 7 //
	printf("return space = %d\n", printf("% Lf\n", l));
	printf("|||return space |||= %d\n", ft_printf("% Lf\n", l));
	printf("**********77777***********\n");
// Test 8 //
	printf("return 2.1 = %d\n", printf("%2.1Lf\n", l));
	printf("|||return 2.1 |||= %d\n", ft_printf("%2.1Lf\n", l));
	printf("***********8888**********\n");
// Test 9 //
	printf("return 2.2 = %d\n", printf("%2.2Lf\n", l));
	printf("|||return 2.2 |||= %d\n", ft_printf("%2.2Lf\n", l));
	printf("********9999*************\n");
// Test 10 //
	printf("return 2.3 = %d\n", printf("%2.3Lf\n", l));
	printf("|||return 2.3 |||= %d\n", ft_printf("%2.3Lf\n", l));
	printf("*******10**************\n");
// Test 11 //
	printf("return 020.5 = %d\n", printf("% 20.5Lf\n", l));
	printf("|||return 020.5 |||= %d\n", ft_printf("% 20.5Lf\n", l));
	printf("*********11************\n");
// Test 12 //
	printf("return 020.5 = %d\n", printf("%+20.5Lf\n", l));
	printf("|||return 020.5 |||= %d\n", ft_printf("%+20.5Lf\n", l));
	printf("********12*************\n");
// Test 13 //
	printf("return 020.5 = %d\n", printf("%-+20.5Lf\n", lz));
	printf("|||return 020.5||| = %d\n", ft_printf("%-+20.5Lf\n", lz));
	printf("**********13***********\n");
// Test 14 //
	printf("return positive 2.3 = %d\n", printf("%2.3f\n", dp));
	printf("|||return 2.3 |||= %d\n", ft_printf("%2.3f\n", dp));
	printf("*******14**************\n");
// Test 15 //
	printf("return positive 020.5 = %d\n", printf("% 20.5f\n", dp));
	printf("|||return 020.5 |||= %d\n", ft_printf("% 20.5f\n", dp));
	printf("*********15************\n");
// Test 16 //
	printf("return 20.0  = %d\n", printf("%20.0f\n", d));
	printf("|||return 20.0 ||| = %d\n", ft_printf("%20.0f\n", d));
	printf("********16*************\n");
//	Test 17 //
	printf("***********check for float**********\n");
	printf("return less 0.0 = %d\n", printf("%f\n", fp));
	printf("|||return long double||| = %d\n", ft_printf("%f\n", fp));
	printf("*******17**************\n");
	return (0);
}
