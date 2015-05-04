/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:43:49 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/26 19:11:13 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	cp;
	size_t	x;
	char	*tmp;

	cp = ft_strlen(src);
	tmp = (char *)(src);
	x = 0;
	while ((x < n) && (x < cp))
	{
		dst[x] = tmp[x];
		x++;
	}
	while (x < n)
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}
