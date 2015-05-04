/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 17:17:57 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/18 17:55:17 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*us1;
	unsigned char		*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (n-- > 0)
		if (*us1++ != *us2++)
			return (*--us1 - *--us2);
	return (0);
}
