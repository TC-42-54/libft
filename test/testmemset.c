/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmemset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:23:05 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/03 18:51:16 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}


void *ft_memtest(char *str, char c, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	char str1[20];
	char str2[20];

	i = 0;
	while(argv[1][i] != '\0')
	{
		str1[i] = argv[1][i];
		str2[i] = argv[1][i];
		i++;
	}
	printf("%s \n", str1);
	printf("%s \n", str2);
	memset(str1, 'o', 15);
	ft_memtest(str2, 'o', 15);
	printf("%s \n", str1);
	printf("%s", str2);
	return(0);
}
