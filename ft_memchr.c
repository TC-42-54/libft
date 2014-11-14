/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:53:19 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/14 11:24:06 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(void *s, int c, size_t n)
{
	char	*r;

	r = (char *)s;
	if (r != NULL)
	{
		while (n--)
		{
			if (*r == c)
				return (((unsigned char *)r));
			r++;
		}
	}
	return (NULL);
}
