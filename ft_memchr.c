/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:53:19 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/06 15:44:43 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
	size_t i;
	char *r;
	char *cc;

	r = (char *)s;
	cc = malloc((ft_strlen((const char *)c) + 1) * (sizeof (c)));
	cc = (char *)c; 
	i = 0;
	if (r != NULL)
	{
		while ((i < n) && (r[i] != c))
		{
			i++;
			if (((unsigned char *)r + i) == c)
				return (((unsigned char *)s + i));
		}
	}
	ft_putstr("on est sortis du while !");
	return (NULL);
}
