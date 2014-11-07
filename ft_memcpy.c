/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:01:16 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/06 11:14:35 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(char *src, char *dest, size_t n)
{
	size_t i;

	i = 0;
	while (n > i)
	{
		(dest[i]) = src[i];
		i++;
	}
	return ((char *)dest);
}
