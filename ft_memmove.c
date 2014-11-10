/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:18:40 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:24:49 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, void *src, size_t n)
{
	void *tmp;

	if (src != NULL)
	{
		tmp = malloc((ft_strlen(src) + 1) * (sizeof(*tmp)));
		ft_strncpy(tmp, src, n);
		if (tmp != NULL)
		{
			ft_strncpy(dst, tmp, n);
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
