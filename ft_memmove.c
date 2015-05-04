/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:18:40 by tchezier          #+#    #+#             */
/*   Updated: 2015/01/21 13:07:04 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, void *src, size_t n)
{
	char *tmp;

	if (src != NULL)
	{
		tmp = (char *)malloc(sizeof(*tmp) * n);
		ft_memcpy(tmp, src, n);
		if (tmp != NULL)
		{
			dst = ft_memcpy(dst, tmp, n);
			if (dst != NULL)
			{
				return (dst);
			}
			else
				return (NULL);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
