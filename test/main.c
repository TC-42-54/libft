/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:17:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/13 20:17:49 by tchezier         ###   ########.fr       */
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
	char *strstr1;
	char *strstr2;
	char *strstr3;
	char *strstr4;
	/* char nbr */
	char *str;
	char *dest;
	char *duptest = NULL;
	char memtest[20];

	ft_strcpy(memtest, "Ceci est un test.");
	argc = argc;
	ft_strcpy(str1, argv[1]);
	ft_strcpy(str2, str1);
	ft_strcpy(str4, str2);
	ft_strcpy(str5, str4);
	ft_strcpy(str6, str5);
	ft_strcpy(str7, str6);
	ft_strcpy(str9, str7);
	str = malloc((ft_strlen(str9) + 1) * (sizeof(*str)));
	dest = malloc((ft_strlen(str9) + 1) * (sizeof(*dest)));
	ft_strcpy(str, "thomaschez42");
	ft_strcpy(dest, str9);
	ft_strcpy(dest2, "bonjour42");
	printf("Test de memset ! \n");
    ft_putstr(str2);
	ft_putstr(str4);
    ft_memset(str2, 'o', 5);
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
	ft_putchar(str1[7]);
	ft_putchar(str1[8]);
	ft_putchar('\n');
	ft_putstr(str1 + 3);
	ft_putstr("test de strlen ;)");
	cp = ft_strlen(str4);
	ft_putnbr(cp);
	ft_putchar('\n');
	ft_putstr("test putnbr");
	ft_putnbr(5734);
	ft_putchar('\n');
	ft_putstr("test memcpy");
	ft_putstr(str5);
	ft_memcpy(str5, memtest, 5);
	ft_putstr(str5);
	ft_putstr("test de memccpy");
	ft_putstr(str6);
	ft_bzero(str6, ft_strlen(str6));
	memccpy(str6, memtest, 'i', 10);
	ft_putstr(str6);
	ft_bzero(str6, ft_strlen(str6));
	ft_memccpy(str6, memtest, 'i', 10);
	ft_putstr(str6);
	ft_putstr("test de strdup");
	duptest = ft_strdup(str7);
	ft_putstr(duptest);
	ft_putstr("test de strncpy");
	ft_strncpy(str8, str7, 9);
	ft_putstr(str8);
	ft_strncpy(str8, str7, 3);
	ft_putstr(str8);
	ft_strncpy(str8, str7, 35);
	ft_putstr(str8);
	ft_putstr("test de memmove");
	ft_memmove(str10, str9, 9);
	ft_putstr(str10);
	/*ft_putstr("test de memchr");
	ft_putchar(ft_memchr(str10, 'o', 9));
	ft_putchar('\n');
	ft_putchar((char)ft_memchr(str10, 'q', 9));
	ft_putchar('\n');*/
	ft_putstr("test de strcat");
	ft_putstr(dest2);
	ft_strcat(dest2, str);
	ft_putstr(dest2);
	ft_putnbr(strlen(dest2));
	ft_putchar('\n');
	ft_putstr("test de strncat");
	str = ft_strdup("salut");
	ft_strncat(dest, str, 3);
	ft_putstr(dest);
	ft_putnbr(ft_strlen(str7));
	ft_putchar('\n');
	ft_putstr("test de strchr");
	ft_strcpy(chr1, ft_strchr(dest2, '4'));
	ft_putstr(chr1);
	ft_putstr("test de strrchr");
	ft_strcpy(chr2, ft_strrchr("bonjour42thomas42voiture", '4'));
	ft_putstr(chr2);
	ft_putstr("test de strstr");
	strstr1 = ft_strdup("my house is small");
	strstr2 = ft_strdup("my car is huge");
	strstr3 = ft_strdup("house");
	strstr4 = ft_strdup("car");
	ft_putstr(ft_strstr(strstr1, strstr3));
	ft_putstr(ft_strstr(strstr2, strstr4));
	ft_putstr(ft_strstr(strstr2, strstr3));
	ft_putstr("test de strcmp");
	ft_putnbr(ft_strcmp(strstr1, strstr2));
	ft_putchar('\n');
	ft_putstr("test de strncmp");
	ft_putnbr(ft_strncmp(strstr1, strstr2, 10));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(strstr1, strstr2, 1));
	ft_putchar('\n');
	ft_putstr("test de isalpha");
	ft_putnbr(ft_isalpha('a'));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(';'));
	ft_putchar('\n');
	ft_putstr("test de isdigit");
	ft_putnbr(ft_isdigit('3'));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit('e'));
	ft_putchar('\n');
	ft_putstr("test de isalnum");
	ft_putnbr(ft_isalnum('a'));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum('6'));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum('.'));
	ft_putchar('\n');
    ft_putstr("test de isascii");
	ft_putnbr(ft_isascii(';'));
	ft_putchar('\n');
	ft_putstr("test de isprint");
	ft_putnbr(ft_isprint(39));
	ft_putchar('\n');
	ft_putnbr(ft_isprint(56));
	ft_putchar('\n');
	ft_putstr("test de atoi");
	ft_putnbr(ft_atoi("2645"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-123"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("569"));
	ft_putchar('\n');
	ft_putnbr(atoi("a56"));
	ft_putchar('\n');
	ft_putnbr(atoi("+2;5;6"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("20000000000"));
	ft_putchar('\n');
	ft_putstr(ft_strnstr("bonjour42", "jour", 7));
	ft_putchar(ft_toupper('a'));
	ft_putchar('\n');
	ft_putchar(toupper('a'));
	ft_putchar('\n');
	ft_putchar(ft_tolower('A'));
	ft_putchar('\n');
	ft_putchar(tolower('A'));
	return(0);
}
