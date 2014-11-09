/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:04:07 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/08 11:25:32 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dest;
	char *s2;

	s2 = malloc((ft_strlen(s1) + 1) * (sizeof(*s2)));
	s2 = (char *)(s1);
	dest = NULL;
	if (s1 != NULL)
	{
		dest = malloc((ft_strlen(s1) + 1) * (sizeof(*dest)));
		if (dest != NULL)
			ft_strcpy(s2, dest);
		return (dest);
	}
	else
		return (NULL);
}
