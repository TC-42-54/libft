/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:45:04 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/09 15:43:49 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strcpy(const char *src, char *dest)
{
	int cp;
	int x;
	char *src2;

	cp = ft_strlen(src);
	src2 = (char *)(src);
	x = 0;
	while (cp > x)
	{
		dest[x] = src2[x];
		x++;
	}
	dest[cp] = '\0';
	return (dest);
}
