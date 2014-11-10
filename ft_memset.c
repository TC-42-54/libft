/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:58:23 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:25:20 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = malloc(len + 1);
	s = (char *)(b);
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return ((void *)b);
}
