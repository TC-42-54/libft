/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:03:07 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/04 10:33:15 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

int main()
{
	char str1[] = "bonjour42";
	printf("%s", str1);
	printf("\n");
	bzero(str1, 5);
	printf("%s \n", str1);
}
