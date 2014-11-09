/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:45:04 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/09 18:07:49 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strcpy(char *dst, const char *src)
{
	int cp;
	int x;
	char *src2;

	cp = ft_strlen(src);
	src2 = (char *)(src);
	x = 0;
	while (cp > x)
	{
		dst[x] = src2[x];
		x++;
	}
	dst[cp] = '\0';
	return (dst);
}
