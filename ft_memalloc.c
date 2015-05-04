/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 17:23:54 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/30 18:07:22 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	void		*alloc;
	char		*ret;
	size_t		count;

	alloc = (void *)malloc(size);
	ret = (char *)alloc;
	if (ret)
	{
		count = 0;
		while (count < size)
		{
			ret[count] = 0;
			count++;
		}
		return (alloc);
	}
	return (NULL);
}
