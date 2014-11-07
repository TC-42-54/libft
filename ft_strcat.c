/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:16:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 09:05:18 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *src, char *dest)
{
	size_t cn;
	size_t i;
	size_t x;
	size_t y;

	x = 0;
	y = ft_strlen(src);
	i = ft_strlen(dest);
	dest[i] = 0;
	cn = y + i;
	while (x < y && i < cn)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[cn] = '\0';
	return (dest);
}
