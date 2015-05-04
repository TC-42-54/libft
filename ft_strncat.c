/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:49:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/14 20:37:59 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, char *s2, size_t n)
{
	size_t	cn;
	size_t	i;
	size_t	x;
	size_t	y;
	char	*src2;

	src2 = malloc((n + 1) * (sizeof(*src2)));
	ft_strncpy(src2, s2, n);
	x = 0;
	y = ft_strlen(src2);
	i = ft_strlen(s1);
	s1[i] = 0;
	cn = y + i;
	while (x < y && i < cn)
	{
		s1[i] = src2[x];
		i++;
		x++;
	}
	s1[cn] = '\0';
	return (s1);
}
