/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 15:37:22 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/18 16:54:35 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t		size2;
	size_t		ln;
	size_t		ln2;

	size2 = size;
	ln = ft_strlen(dst);
	ln2 = ft_strlen(src);
	while (*dst && size)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (size2 + ln2);
	while (*src && size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (ln + ln2);
}
