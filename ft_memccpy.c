/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:01:16 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/04 19:08:07 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(char *src, char *dest, int c, int n)
{
	int i;

	i = 0;
	while (n > i && dest[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
