/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:16:09 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/18 16:53:54 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, char *s2)
{
	size_t cn;
	size_t i;
	size_t x;
	size_t y;

	x = 0;
	y = ft_strlen(s2);
	i = ft_strlen(s1);
	s1[i] = 0;
	cn = y + i;
	while (x < y && i < cn)
	{
		s1[i] = s2[x];
		i++;
		x++;
	}
	s1[cn] = '\0';
	return (s1);
}
