/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:43:49 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/09 18:28:21 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strncpy(char *dst, char *src, size_t n)
{
	size_t cp;
	size_t x;

	cp = -1;
	x = ft_strlen(src);
	ft_bzero(dst, ft_strlen(dst));
	if (n > x)
	{
		while (++cp < x)
			dst[cp] = src[cp];
		while ((++cp < n) && (++cp >= x))
			dst[cp] = 0;
		return (dst);
	}
	else if (n <= x)
	{
		while (++cp < n)
			dst[cp] = src[cp];
		return (dst);
	}
	else
		return (NULL);
}
