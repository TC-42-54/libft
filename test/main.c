/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:17:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/04 19:41:03 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
	int cp;
    char str1[20];
    char str2[20];
	char str4[20];
	char str5[20];
	char str6[20];
	char str7[20];
	char duptest;
	char memtest[20];

	ft_strcpy("bouh!", memtest);
	argc =argc;
	ft_strcpy(argv[1], str1);
	ft_strcpy(str1, str2);
	ft_strcpy(str2, str4);
	ft_strcpy(str4, str5);
	ft_strcpy(str5, str6);
	ft_strcpy(str6, str7);
	printf("Test de memset ! \n");
    ft_putstr(str2);
	ft_putstr(str4);
	ft_putchar('\n');
    ft_memset(str2, 'o', 15);
    printf("%s \n", str2);
	printf("Test de bzero \n");
	printf("%s \n", str1);
	ft_bzero(str1, 5);
	printf("%s \n", str1);
	ft_putstr("test avec putstr");
	ft_putstr(str1);
	ft_putstr("test de strlen ;)");
	cp = ft_strlen(str4);
	ft_putnbr(cp);
	ft_putchar('\n');
	ft_putstr("test putnbr");
	ft_putnbr(5734);
	ft_putchar('\n');
	ft_putstr("test memcpy");
	ft_putstr(str5);
	ft_memcpy(memtest, str5, 5);
	ft_putstr(str5);
	ft_putstr("test de memccpy");
	ft_putstr(str6);
	ft_memccpy(memtest, str6, 'j', 5);
	ft_putstr(str6);
	ft_putstr("test de strdup");
	duptest = ft_strdup(*str7);
	ft_putstr(duptest);
    return(0);
}
