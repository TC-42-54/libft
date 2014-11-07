/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:17:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 18:44:17 by tchezier         ###   ########.fr       */
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
	char str8[20];
	char str9[20];
	char str10[20];
	char dest2[20];
	char chr1[20];
	char chr2[20];
	char strstr1[20];
	char strstr2[20];
   /* char *nbr; */
	char *str;
	char *dest;
	char *duptest = NULL;
	char memtest[20];

	ft_strcpy("bouh!", memtest);
	argc = argc;
	ft_strcpy(argv[1], str1);
	ft_strcpy(str1, str2);
	ft_strcpy(str2, str4);
	ft_strcpy(str4, str5);
	ft_strcpy(str5, str6);
	ft_strcpy(str6, str7);
	ft_strcpy(str7, str9);
	str = malloc((ft_strlen(str9) + 1) * (sizeof(*str)));
	dest = malloc((ft_strlen(str9) + 1) * (sizeof(*dest)));
	ft_strcpy("thomaschez42", str);
	ft_strcpy(str9, dest);
	ft_strcpy("bonjour42", dest2);
	printf("Test de memset ! \n");
    ft_putstr(str2);
	ft_putstr(str4);
	ft_putchar('\n');
    ft_memset(str2, 'o', 15);
    printf("%s \n", str2);
	printf("Test de bzero \n");
	printf("%s \n", str1);
	ft_bzero(str1, 2);
	ft_putchar(str1[0]);
	ft_putchar(str1[1]);
	ft_putchar(str1[2]);
	ft_putchar(str1[3]);
	ft_putchar(str1[4]);
	ft_putchar(str1[5]);
	ft_putchar(str1[6]);
	ft_putchar('\n');
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
	duptest = ft_strdup(str7);
	ft_putstr(duptest);
	ft_putstr("test de strncpy");
	ft_strncpy(str7, str8, 9);
	ft_putstr(str8);
	ft_strncpy(str7, str8, 3);
	ft_putstr(str8);
	ft_strncpy(str7, str8, 35);
	ft_putstr(str8);
	ft_putstr("test de memmove");
	ft_memmove(str9, str10, 9);
	ft_putstr(str10);
	/* ft_putstr("test de memchr");
	nbr = ft_memchr(str10, 'o', 9);
	ft_putstr(nbr);
	nbr = ft_memchr(str10, 'q', 9);
	ft_putstr(nbr); */
	ft_putstr("test de strcat");
	ft_strcat(str, dest);
	ft_putstr(dest);
	ft_putnbr(strlen(dest));
	ft_putchar('\n');
	ft_putstr("test de strncat");
	ft_strncat(str, dest2, 6);
	ft_putstr(dest2);
	ft_putnbr(ft_strlen(dest2));
	ft_putchar('\n');
	ft_putstr("test de strchr");
	ft_strcpy(ft_strchr(dest2, '4'), chr1);
	ft_putstr(chr1);
	ft_putstr("test de strrchr");
	ft_strcpy(ft_strrchr("bonjour42thomas42voiture", '4'), chr2);
	ft_putstr(chr2);
	ft_putstr("test de strstr");
	ft_strcpy("my house is small", strstr1);
	ft_strcpy("my car is huge", strstr2);
	ft_putstr(ft_strstr(strstr1, "house"));
	/*ft_putstr(ft_strstr(strstr1, "car"));
	  ft_putstr(ft_strstr(strstr2, "house"));*/
	ft_putstr("test de strcmp");
	ft_putnbr(ft_strcmp(strstr1, strstr2));
	ft_putchar('\n');
	ft_putstr("test de strncmp");
	ft_putnbr(ft_strncmp(strstr1, strstr2, 10));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(strstr1, strstr2, 2));
	ft_putchar('\n');
	ft_putstr("test de isalpha");
	ft_putnbr(ft_isalpha('a'));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(';'));
	ft_putchar('\n');
    return(0);
}
