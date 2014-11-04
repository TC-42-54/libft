/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:04:07 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/04 19:42:01 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src)
{
	char *dest = NULL;

	if (src != NULL)
	{
		malloc((ft_strlen(src) + 1) * (sizeof *dest));
		if (dest != NULL)
		{
			ft_strcpy(src, dest);
		}
	}
	return(dest);
}
