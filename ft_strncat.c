/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:49:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 09:06:06 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *src, char *dest, size_t n)
{
	size_t	cn;
	size_t	i;
	size_t	x;
	size_t	y;
	char	*src2;

	src2 = malloc((n + 1) * (sizeof(*src2)));
	ft_strncpy(src, src2, n);
	x = 0;
	y = ft_strlen(src2);
	i = ft_strlen(dest);
	dest[i] = 0;
	cn = y + i;
	while (x < y && i < cn)
	{
		dest[i] = src2[x];
		i++;
		x++;
	}
	dest[cn] = '\0';
	return (dest);
}
