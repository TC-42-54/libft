/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:18:40 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/06 14:38:19 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *src, void *dest, size_t n)
{
	void *tmp;

	if (src != NULL)
	{
		tmp = malloc((ft_strlen(src) + 1) * (sizeof(*tmp)));
		ft_strncpy(src, tmp, n);
		if (tmp != NULL)
		{
			ft_strncpy(tmp, dest, n);
			if (dest != NULL)
			{
				return (dest);
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
