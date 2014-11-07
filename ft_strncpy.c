/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:43:49 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/06 11:18:12 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strncpy(char *src, char *dest, size_t n)
{
	size_t cp;
	size_t x;

	cp = -1;
	x = ft_strlen(src);
	ft_bzero(dest, ft_strlen(dest));
	if (n > x)
	{
		while (++cp < x)
			dest[cp] = src[cp];
		while ((++cp < n) && (++cp >= x))
			dest[cp] = 0;
		return (dest);
	}
	else if (n <= x)
	{
		while (++cp < n)
			dest[cp] = src[cp];
		return (dest);
	}
	else
		return (NULL);
}
