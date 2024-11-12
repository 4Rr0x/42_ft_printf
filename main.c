/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:30:17 by jopedro-          #+#    #+#             */
/*   Updated: 2024/11/07 13:30:20 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "inc/libft/libft/libft.h"

#define SEP "~~~~~~~~~~~~~~~~~~~~\n"
#define RLR "12345678901234567890\n"

void test_c()
{
		ft_printf("%c\n", 'x');
		ft_printf(" %c\n", 'x');
		ft_printf("%c \n", 'x');
		ft_printf("%c%c%c\n", 'a', '\t', 'b');
		ft_printf("%cc%cc%c\n", 'a', '\t', 'b');
		ft_printf("%cs%cs%c\n", 'c', 'b', 'a');
}

void test_s()
{
		ft_printf("%s\n", "");
		ft_printf("%s\n", (char *)NULL);
		ft_printf("%s\n", "some string with %s hehe");
		ft_printf(" %s\n", "can it handle \t and \n?");
		ft_printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
		ft_printf("%s%s%s\n", "And ", "some", "joined");
		ft_printf("%ss%ss%ss\n", "And ", "some other", "joined");
}

void test_p()
{
		ft_printf("%p\n", "");
		ft_printf("%p\n", NULL);
		ft_printf("%p\n", (void *)-14523);
		ft_printf("0x%p-\n", (void *)ULONG_MAX);
		ft_printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
}

void test_d()
{
		ft_printf("%d\n", 0);
		ft_printf("%d\n", -10);
		ft_printf("%d\n", -200000);
		ft_printf("%d\n", -6000023);
		ft_printf("%d\n", 10);
		ft_printf("%d\n", 10000);
		ft_printf("%d\n", 100023);
		ft_printf("%d\n", INT_MAX);
		ft_printf("%d\n", INT_MIN);
		ft_printf("dgs%dxx\n", 10);
		ft_printf("%d%dd%d\n", 1, 2, -3);
}

void test_i()
{
		ft_printf("%i\n", 0);
		ft_printf("%i\n", -10);
		ft_printf("%i\n", -200000);
		ft_printf("%i\n", -6000023);
		ft_printf("%i\n", 10);
		ft_printf("%i\n", 10000);
		ft_printf("%i\n", 100023);
		ft_printf("%i\n", INT_MAX);
		ft_printf("%i\n", INT_MIN);
		ft_printf("dgs%ixx\n", 10);
		ft_printf("%i%ii%i\n", 1, 2, -3);
}

void test_u()
{
		ft_printf("%u\n", 0);
		ft_printf("%u\n", -10);
		ft_printf("%u\n", -200000);
		ft_printf("%u\n", -6000023);
		ft_printf("%u\n", 10);
		ft_printf("%u\n", 10000);
		ft_printf("%u\n", 100023);
		ft_printf("%u\n", INT_MAX);
		ft_printf("%u\n", INT_MIN);
		ft_printf("%u\n", UINT_MAX);
		ft_printf("dgs%uxx\n", 10);
		ft_printf("%u%uu%u\n", 1, 2, -3);
}

void test_x()
{
		ft_printf("%x\n", 0);
		ft_printf("%x\n", -10);
		ft_printf("%x\n", -200000);
		ft_printf("%x\n", -6000023);
		ft_printf("%x\n", 10);
		ft_printf("%x\n", 10000);
		ft_printf("%x\n", 100023);
		ft_printf("%x\n", 0xabcdef);
		ft_printf("%x\n", 0x7fedcba1);
		ft_printf("%x\n", INT_MAX);
		ft_printf("%x\n", INT_MIN);
		ft_printf("%x\n", UINT_MAX);
		ft_printf("dgs%xxx\n", 10);
		ft_printf("%x%xx%x\n", 1, 2, -3);
}
void test_X()
{
		ft_printf("%X\n", 0);
		ft_printf("%X\n", -10);
		ft_printf("%X\n", -200000);
		ft_printf("%X\n", -6000023);
		ft_printf("%X\n", 10);
		ft_printf("%X\n", 10000);
		ft_printf("%X\n", 100023);
		ft_printf("%X\n", 0xabcdef);
		ft_printf("%X\n", 0x7fedcba1);
		ft_printf("%X\n", INT_MAX);
		ft_printf("%X\n", INT_MIN);
		ft_printf("%X\n", UINT_MAX);
		ft_printf("dgs%Xxx\n", 10);
		ft_printf("%X%Xx%X\n", 1, 2, -3);
}

void extra(void)
{
	printf("%i\n", ft_printf(" %x \n", 0));
	printf("%i\n", printf(" %x \n", 0));
	printf("%i\n", ft_printf(" %x \n", LONG_MIN));
	printf("%i\n", printf(" %x \n", LONG_MIN));
	printf("%i\n", ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("%i\n", printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("%i\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	printf("%i\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	ft_printf("NULL %s NULL\n", NULL);
	printf("NULL %s NULL\n", NULL);
}

int main(void)
{
	extra();
	//test_c();
	//test_s();
	//test_p();
	//test_d();
	//test_i();
	//test_u();
	//test_x();
	//test_X();
}
