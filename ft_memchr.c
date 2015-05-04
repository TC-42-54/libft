/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 09:45:32 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/18 16:56:03 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s2;
	unsigned char		c2;

	s2 = (unsigned char *)(s);
	c2 = (unsigned char)(c);
	if (s2 == NULL)
		return (NULL);
	if ((s2) && (n > 0))
	{
		while ((n > 0) && (*s2 != c2))
		{
			n--;
			s2++;
		}
		if ((n > 0) && *s2 == c2)
			return ((void *)s2);
	}
	return (NULL);
}
