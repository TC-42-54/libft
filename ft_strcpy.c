/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:45:04 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/04 19:10:26 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strcpy(char *src, char *dest)
{
	int cp;
	int x;

	x = 0;
	ft_bzero(dest, ft_strlen(dest));
	cp = ft_strlen(src);
	while (cp > x)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
